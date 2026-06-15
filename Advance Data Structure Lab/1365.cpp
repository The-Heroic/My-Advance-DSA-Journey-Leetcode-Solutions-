#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<int>nums={6, 5, 4, 8};
    vector<int>arr;
    int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            arr.push_back(count);
            count=0;
        }
        for(int i:arr){
            cout<<i<<" ";
        }
return 0;

}