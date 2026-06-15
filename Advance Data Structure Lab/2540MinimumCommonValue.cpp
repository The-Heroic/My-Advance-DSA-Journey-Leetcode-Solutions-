#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0; // Pointer for nums1
        int j = 0; // Pointer for nums2
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        // Loop until one of the pointers runs out of bounds
        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]) {
                return nums1[i]; // Found the smallest common element!
            }
            else if (nums1[i] < nums2[j]) {
                i++; // nums1 value is smaller, increment its pointer
            }
            else {
                j++; // nums2 value is smaller, increment its pointer
            }
        }
        
        // If the loop finishes without finding any common element
        return -1;
    }
};

int main(){

}