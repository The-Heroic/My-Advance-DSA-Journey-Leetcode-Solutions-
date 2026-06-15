#include <bits\stdc++.h>
using namespace std;

class Solution1 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // 1. Ensure nums1 is the smaller array to optimize binary search range
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int partitionX = (low + high) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;

            // Edge cases: If partition is at 0, use -Infinity. If at end, use +Infinity.
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            // 2. Check if we found the perfect partition
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                // Even total length
                if ((m + n) % 2 == 0) {
                    return (max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                } 
                // Odd total length
                else {
                    return max(maxLeftX, maxLeftY);
                }
            } 
            else if (maxLeftX > minRightY) {
                // We are too far right in nums1, move left
                high = partitionX - 1;
            } 
            else {
                // We are too far left in nums1, move right
                low = partitionX + 1;
            }
        }

        return 0.0;
    }
};

class Solution {
public:
    vector<int> combineSorted(vector<int>& A, vector<int>& B) {
            vector<int> result;
            int i = 0, j = 0;

            while (i < A.size() && j < B.size()) {
                if (A[i] <= B[j]) {
                    result.push_back(A[i++]);
                } else {
                    result.push_back(B[j++]);
                }
            }

            while (i < A.size()) result.push_back(A[i++]);

            while (j < B.size()) result.push_back(B[j++]);

            return result;
        }
    

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr = combineSorted(nums1, nums2);
        double median =0;
        int n = arr.size();
            if(n%2==0){
                median = (arr[(n/2)] + arr[(n/2)-1])/2.0;
            }
            else{
                median = arr[(n/2)];
            }
    return median;
    }
};


int main(){

}