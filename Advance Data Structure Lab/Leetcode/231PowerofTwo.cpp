#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i =1;
        if(n<=0)return false;
        while(i<100){
            if(pow(2,i)==n){
                return true;
            }
            i++;
        }

        return false;
    }
};
int main(){
int n ;
cin>>n;
Solution sol;
cout<<boolalpha<<sol.isPowerOfTwo(n);
}