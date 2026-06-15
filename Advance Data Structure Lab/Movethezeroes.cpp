#include <iostream>
using namespace std;

int main() { 
    int nums[] = {0,1,0,3,12};
    int length = sizeof(nums) / sizeof(nums[0]);
    for(int j=0;j<length;j++){    
        for(int i=j; i<length; i++){
            if(nums[i]==0){
                swap(nums[i],nums[i+1]);
            }
            }
        }
            
    return 0;
    }