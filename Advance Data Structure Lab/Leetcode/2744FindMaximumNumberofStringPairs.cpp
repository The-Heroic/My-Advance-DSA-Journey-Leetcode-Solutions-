#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        for(int i = 0; i< words.size(); i++){
            int left = i;
            int right = i+1;
            while(left != right && right<words.size()){
                string str = words[right];
                reverse(str.begin(), str.end());
                if(words[left] == str){
                    count++;
                }
                right++;
            }
        }
    return count;
    }
};

int main(){

}