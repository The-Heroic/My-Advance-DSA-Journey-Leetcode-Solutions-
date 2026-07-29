#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int a =0;
        int b =1;
        int current = 0;
        

        for(int i=1; i<=n; i++){
            current = a+b;
            a =b;
            b=current;
        }
        return b;
    }
};


//using DP 
class Solution1 {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        
        vector<int> dp(n + 1);
        
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};


int main(){
    int n;
    cin>>n;
    Solution sol;
    int result = sol.climbStairs(n);
    cout<<result;

}
