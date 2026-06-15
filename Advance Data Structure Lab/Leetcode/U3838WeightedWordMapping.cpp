#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";
        
        for (const string& word : words) {
            int total_weight = 0;
            
            // Calculate total weight of the current word
            for (char c : word) {
                total_weight += weights[c - 'a'];
            }
            
            // Take the weight modulo 26
            int rem = total_weight % 26;
            
            // Map using reverse alphabetical order: 0 -> 'z', 1 -> 'y', ..., 25 -> 'a'
            char mapped_char = 'z' - rem;
            
            result += mapped_char;
        }
        
        return result;
    }
};