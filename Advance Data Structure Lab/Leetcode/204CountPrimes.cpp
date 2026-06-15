#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // 1. Initialize a boolean vector where 'true' means 'is prime'
        // We set all to true initially.
        vector<bool> isPrime(n, true);
        
        // 0 and 1 are not prime
        isPrime[0] = isPrime[1] = false;

        // 2. The Sieve logic
        for (int p = 2; p * p < n; p++) {
            if (isPrime[p]) {
                // If p is prime, mark all its multiples starting from p*p
                // We start at p*p because smaller multiples were already 
                // marked by smaller primes.
                for (int i = p * p; i < n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        // 3. Count how many 'true' remain in the vector
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};

int main(){
    int num;
    cin>>num;

    Solution sol;
    cout<<sol.countPrimes(num);
}