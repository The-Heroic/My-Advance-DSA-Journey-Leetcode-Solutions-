#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result;

        int n = nums.size();

        for(int i = 0; i<n;i++){
            int k = nums[i];

            if(k>0){
                int j = k;
                while(j<n){
                    
                }
                result.push_back(nums[i+k]);

            }
            else if(k<0){
                result.push_back(nums[n+k]);
            }
            else{
                result.push_back(nums[i]);
            }
        }
    return result;
    }
};


#include <vector>

using namespace std;

class Solution1 {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        // Initialize the result vector with the same size as nums
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            // Apply the circular index formula
            // We cast to long long if values are huge, but here int is fine
            int landingIndex = ((i + nums[i]) % n + n) % n;
            
            result[i] = nums[landingIndex];
        }

        return result;
    }
};

int main(){

}