#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int evenCount = 0;
        int oddNum = *min_element(nums1.begin(), nums1.end());
        
    for(int i =0; i< nums1.size(); i++){
        if(nums1[i]%2==0){
            evenCount++;
        }
    }   

    if(evenCount == nums1.size()){
        return true;
    }
    else{
        if(oddNum %2==0){
            return false;
        }
    }
    return true;
    
    }
};

int main(){

}