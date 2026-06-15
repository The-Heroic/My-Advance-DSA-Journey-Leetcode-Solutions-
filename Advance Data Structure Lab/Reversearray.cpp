#include <iostream>
using namespace std;

int main() {
    int nums[] = {0,1,0,3,12};
     int left=0;
     int right= 5 - 1;
        while (left<right){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
        cout<<"reversed String: ";
        for(int x:nums){
            cout<<x<<" ";
        }
    return 0;
    }