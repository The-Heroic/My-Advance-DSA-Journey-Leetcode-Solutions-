#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int n= s.size();
        int minTotalOperations = INT_MAX;

        for(int r =0; r<n; r++){
            int currOps= r;

            for(int j =0; j<n/2; j++){
                char c1 = s[(j+r)%n];
                char c2 = s[(n-1-j+r)%n];

                int cost1 =(c2-c1+26)%26;
                int cost2 =(c1-c2+26)%26;

                currOps += min(cost1, cost2);
            }

            minTotalOperations = min(minTotalOperations, currOps);
        }
        
        return minTotalOperations;
        
    
    }
};


int main(){

}