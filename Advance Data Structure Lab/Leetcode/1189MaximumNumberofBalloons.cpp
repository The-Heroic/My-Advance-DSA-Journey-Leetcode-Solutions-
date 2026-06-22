#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> counts;

        // 1. Populate the map with frequencies of each character
        for (char c : text) {
            counts[c]++;
        }

        // 2. Extract the counts for the specific letters we need
        // Using counts[key] is safe here because if it doesn't exist, 
        // C++ initializes it to 0 automatically.
        int b = counts['b'];
        int a = counts['a'];
        int l = counts['l'] / 2; // Every balloon requires 2 'l's
        int o = counts['o'] / 2; // Every balloon requires 2 'o's
        int n = counts['n'];

        // 3. Return the minimum of these adjusted counts
        return min({b, a, l, o, n});
    }
};

int main(){
    
}