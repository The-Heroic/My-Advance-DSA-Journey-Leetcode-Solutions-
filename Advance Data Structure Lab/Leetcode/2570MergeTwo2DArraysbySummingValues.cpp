#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        int i = 0;
        int j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();

        while (i < n1 && j < n2) {
            int id1 = nums1[i][0], val1 = nums1[i][1];
            int id2 = nums2[j][0], val2 = nums2[j][1];

            if (id1 == id2) {
                result.push_back({id1, val1 + val2});
                i++;
                j++;
            } 
            else if (id1 < id2) {
                result.push_back({id1, val1});
                i++;
            } 
            else {
                result.push_back({id2, val2});
                j++;
            }
        }

        while (i < n1) {
            result.push_back(nums1[i]);
            i++;
        }

        while (j < n2) {
            result.push_back(nums2[j]);
            j++;
        }

        return result;
    }
};


int main(){

}