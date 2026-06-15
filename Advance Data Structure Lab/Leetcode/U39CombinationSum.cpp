#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum= 0;
        int n = candidates.size();
        int end = candidates[n];

        
            
    }
};


class Solution1 {
public:
    void findCombinations(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
        // Base Case: If we have reached the end of the candidates array
        if (ind == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Choice 1: Pick the element (only if it's less than or equal to current target)
        if (arr[ind] <= target) {
            ds.push_back(arr[ind]);
            // Notice: We stay at the same index 'ind' to allow multiple uses
            findCombinations(ind, target - arr[ind], arr, ans, ds);
            // Backtrack: Remove the element to try other paths
            ds.pop_back();
        }

        // Choice 2: Don't pick the element and move to the next index
        findCombinations(ind + 1, target, arr, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0, target, candidates, ans, ds);
        return ans;
    }
};
int main(){

}