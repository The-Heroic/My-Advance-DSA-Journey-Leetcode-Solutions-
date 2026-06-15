#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n);
        
        // Frequency tracker for elements (1-indexed based on constraints)
        vector<int> frequency(n + 1, 0);
        
        int common_count = 0;
        
        for (int i = 0; i < n; ++i) {
            // Process element from array A
            frequency[A[i]]++;
            if (frequency[A[i]] == 2) {
                common_count++;
            }
            
            // Process element from array B
            frequency[B[i]]++;
            if (frequency[B[i]] == 2) {
                common_count++;
            }
            
            // Store the running tally for the current prefix index
            C[i] = common_count;
        }
        
        return C;
    }
};

int main(){
    
}