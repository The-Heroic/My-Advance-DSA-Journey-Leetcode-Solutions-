#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> largestString(vector<int>& nums) {
        vector<string> result;

        for(long long x:nums){
            string line = "";
            char ch = 'a';

            while(ch<'z' && x > 0){
                if(x%2 != 0){
                    line.push_back(ch);
                }
                x/=2;
                ch++;
            }
            if(x>0){
                line.append(x,'z');
            }

            reverse(line.begin(), line.end());
            result.push_back(line);
        }
        return result;
    }
};

int main(){

}