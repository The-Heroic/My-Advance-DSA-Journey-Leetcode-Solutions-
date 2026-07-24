#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> setA;
        copy(nums1.begin(), nums1.end(), inserter(setA, setA.end()));
        set<int> setB;
        copy(nums2.begin(), nums2.end(), inserter(setB, setB.end()));

        vector<int> interRes;
    set_intersection(setA.begin(), setA.end(),
        setB.begin(), setB.end(),
        back_inserter(interRes));
        
        return interRes;
    }
};


int main(){


}