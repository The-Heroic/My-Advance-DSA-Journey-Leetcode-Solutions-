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
int main(){
    int n;
    cin>>n;
    Solution sol;
    int result = sol.climbStairs(n);
    cout<<result;

}
