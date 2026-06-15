#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    long long countTriples(long long n) {
        int count =0;
        for(long long i = 1; i<n ; i++){
            for(long long j =1; j<n; j++){
                for(long long k = 1; k<n; k++){
                    if((k*k) + (j*j) == (i*i) ){
                        count++;
                    }
                }
                
            }
        }

    return count;
    }
};

#include <cmath>

class Solution1 {
public:
    long long countTriples(long long n) {
        int count = 0;
        
        // i is the hypotenuse (the largest side)
        for (long long i = 1; i <= n; i++) {
            // j is the first side
            for (long long j = 1; j < i; j++) {
                // Calculation: k^2 = i^2 - j^2
                long long k2 = (i * i) - (j * j);
                long long k = sqrt(k2);
                
                // Check if k is an integer and k*k equals k2
                if (k * k == k2) {
                    count++;
                }
            }
        }
        return count;
    }
};

if((i*i) + (j*j) == n*n){
                    count++;
                }

int main(){
    
    int n; 
    cin>> n;

    Solution sol;
    cout<<sol.countTriples(n);
}