#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        bool p = false;
        bool q = false ;
        int i = 0;
        int n = nums.size();
        if(i + 1 < n && nums[i+1] > nums[i]){
            while(i + 1 < n && nums[i+1] > nums[i]){
            i++;
            }
            p = true;
        }

        if(i + 1 < n && nums[i+1] < nums[i]){
            while(i + 1 < n && nums[i+1] < nums[i]){
                i++;
            }
            q=true;
        }

        if(i + 1 < n && nums[i+1] > nums[i]){
            while(i + 1 < n && nums[i+1] > nums[i]){
                i++;
            }
        }
        if(i == n - 1){
            return p&&q;
            }
        
         
    return false;
    }
    
};

#include <vector>

using namespace std;

class Solution1 {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        // A Trionic (N-shape) requires at least 4 elements (e.g., 1, 2, 1, 2)
        if (n < 4) return false;

        int i = 0;
        // CRITICAL: Initialize flags to false to avoid garbage values
        bool p = false; // First Up
        bool q = false; // Down
        bool r = false; // Second Up

        // 1. First Increasing Segment
        while (i + 1 < n && nums[i + 1] > nums[i]) {
            i++;
            p = true;
        }

        // 2. Decreasing Segment (Only if we went up first)
        if (p) {
            while (i + 1 < n && nums[i + 1] < nums[i]) {
                i++;
                q = true;
            }
        }

        // 3. Second Increasing Segment (Only if we went down)
        if (q) {
            while (i + 1 < n && nums[i + 1] > nums[i]) {
                i++;
                r = true;
            }
        }

        // Final Verdict: 
        // Must have all three segments AND reached the very end of the array.
        return p && q && r && (i == n - 1);
    }
};

int main(){

}