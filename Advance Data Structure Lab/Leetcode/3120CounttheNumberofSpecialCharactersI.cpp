#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int count =0;
        int left= 0;
        int right= n-1;
        sort(word.begin(), word.end());
        while(left<right){
            if(isupper(word[left])){
                if(word[left]==toupper(word[right])){
                    count++;
                    left++;
                    right = n-1;
                }
                else{
                    right--;
                }
            }
            else if(islower(word[left])){
                if(word[left]==tolower(word[right])){
                    count++;
                    left++;
                    right = n-1;
                }
                else{
                    right--;
                }
            }
            
                
        }
    return count;
        
    }
    
};

#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        int count = 0;
        int left = 0;
        int right = n - 1;
        
        sort(word.begin(), word.end());
        
        while(left < right){
            if(isupper(word[left])){
                // TWEAK 1: Ensure word[right] is lowercase to avoid matching two uppercase letters
                if(islower(word[right]) && word[left] == toupper(word[right])){
                    count++;
                    
                    // TWEAK 2: Skip all duplicate copies of this exact uppercase letter
                    char current_upper = word[left];
                    while(left < n && word[left] == current_upper) {
                        left++;
                    }
                    
                    right = n - 1; // Safely reset right to scan for the next unique character
                }
                else{
                    right--;
                }
            }
            else if(islower(word[left])){
                // TWEAK 3: If left hits a lowercase letter, all uppercase letters are behind us.
                // We can stop immediately!
                break;
            }
        }
        
        return count;
    }
};

#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        // Track whether we have seen lowercase and uppercase versions (size 26 for 'a'-'z')
        vector<bool> hasLower(26, false);
        vector<bool> hasUpper(26, false);
        
        // Mark what we see in a single pass
        for (char c : word) {
            if (islower(c)) {
                hasLower[c - 'a'] = true;
            } else if (isupper(c)) {
                hasUpper[c - 'A'] = true;
            }
        }
        
        // Count how many characters have both flags set to true
        int specialCount = 0;
        for (int i = 0; i < 26; i++) {
            if (hasLower[i] && hasUpper[i]) {
                specialCount++;
            }
        }
        
        return specialCount;
    }
};



int main(){

string word = "aaAbcBC";

Solution sol;

cout<<sol.numberOfSpecialChars(word);



}