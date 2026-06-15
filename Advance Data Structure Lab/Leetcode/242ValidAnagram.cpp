#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
#include <numeric> 
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());

    //     int comp = s.compare(t);
    //     if(comp==0){
    //         return true;
    //     }

    // return false;
    




    //     long long totalSum1 = accumulate(s.begin(), s.end(), 0LL);
    //     long long totalSum2 = accumulate(t.begin(), t.end(), 0LL);

    //     if(totalSum1==totalSum2){
    //         return true;
    //     }
    

    // return false;






class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1. Performance Hack
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        if (s.length() != t.length()) return false;

        // 2. Create a hash map to store character frequencies
        unordered_map<char, int> countMap;

        // 3. Count characters in s and decrement for t
        for (int i = 0; i < s.length(); i++) {
            countMap[s[i]]++;
            countMap[t[i]]--;
        }

        // 4. Check if all frequencies returned to zero
        for (auto const& [character, count] : countMap) {
            if (count != 0) return false;
        }

        return true;
    }
};
    }
  
};





int main(){

}