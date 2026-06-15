#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        string a = to_string(nums[0]);
        for(int i=0; i<nums.size()-1; i++){
            
            string b = to_string(nums[i+1]);
            long long c = max((a+b), (b+a));
            a = to_string(c);

        }
    return a;
    
    }
};

class Solution1 {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> s_nums;
        for (int x : nums) s_nums.push_back(to_string(x));

        // Step 1: Custom Sort (The "Pro" way)
        sort(s_nums.begin(), s_nums.end(), [](string &a, string &b) {
            return a + b > b + a; // Compare concatenations directly
        });

        // Step 2: Handle edge case [0, 0]
        if (s_nums[0] == "0") return "0";

        // Step 3: Combine
        string result = "";
        for (string &s : s_nums) result += s;

        return result;
    }
};


int main(){

}