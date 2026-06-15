#include <bits\stdc++.h>
using namespace std;

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
private:
    struct TrieNode {
        int children[26];
        int best_index;
        TrieNode() {
            fill(begin(children), end(children), -1);
            best_index = -1;
        }
    };

    vector<TrieNode> trie;

    // Helper to update the best index at a node using the problem's tie-breaking rules
    void updateBestIndex(int node_idx, int word_idx, const vector<string>& wordsContainer) {
        int current_best = trie[node_idx].best_index;
        if (current_best == -1) {
            trie[node_idx].best_index = word_idx;
            return;
        }

        int new_len = wordsContainer[word_idx].length();
        int old_len = wordsContainer[current_best].length();

        if (new_len < old_len) {
            trie[node_idx].best_index = word_idx;
        } else if (new_len == old_len) {
            if (word_idx < current_best) {
                trie[node_idx].best_index = word_idx;
            }
        }
    }

public:
    vector<int> stringIndices(vector<string>& wordsContainer, vector<string>& wordsQuery) {
        trie.clear();
        trie.push_back(TrieNode()); // Root node initialization

        // 1. Build the Trie using reversed container words
        for (int i = 0; i < wordsContainer.size(); i++) {
            int curr = 0;
            updateBestIndex(curr, i, wordsContainer); // Root stores global fallback choice

            // Traverse backward to treat suffixes as prefixes
            for (int j = wordsContainer[i].length() - 1; j >= 0; j--) {
                int c = wordsContainer[i][j] - 'a';
                if (trie[curr].children[c] == -1) {
                    trie[curr].children[c] = trie.size();
                    trie.push_back(TrieNode());
                }
                curr = trie[curr].children[c];
                updateBestIndex(curr, i, wordsContainer);
            }
        }

        // 2. Process each query
        vector<int> ans;
        for (const string& query : wordsQuery) {
            int curr = 0;
            int last_valid_best = trie[curr].best_index;

            // Traverse backward to find longest match
            for (int j = query.length() - 1; j >= 0; j--) {
                int c = query[j] - 'a';
                if (trie[curr].children[c] == -1) {
                    break; // Suffix mismatch found, stop searching deeper
                }
                curr = trie[curr].children[c];
                last_valid_best = trie[curr].best_index;
            }
            ans.push_back(last_valid_best);
        }

        return ans;
    }
};

int main(){

}