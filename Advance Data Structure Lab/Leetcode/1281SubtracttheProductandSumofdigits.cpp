#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product =1;
        int sum = 0;
        int Fanswer =0;
        int temp = n;
        while(temp!=0){
            int digit = temp%10;
            product *= digit;
            sum += digit;
            temp /=10;
        }
        
        return (product-sum);
    }
};

int main(){
    int n;
    cin>>n;
    Solution sol;
    int result = sol.subtractProductAndSum(n);
    cout<<result;
}