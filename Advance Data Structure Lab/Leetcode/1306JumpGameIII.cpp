#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int zeroIdx = 0;
        for(int j =0; j< arr.size(); j++){
            if(arr[j]== 0){
                zeroIdx = j;
            }
        }
        int i = 0;
        while((i+ arr[i]!=0) && (0<= i < arr.size())){
        
        }
    }
};

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        // 1. Out of bounds check
        if (start < 0 || start >= arr.size()) {
            return false;
        }
        
        // 2. Cycle check: If value is negative, we've been here before
        if (arr[start] < 0) {
            return false;
        }
        
        // 3. Success check: We found a 0!
        if (arr[start] == 0) {
            return true;
        }
        
        // Save the jump distance before marking it visited
        int jumpValue = arr[start];
        
        // 4. Mark as visited by making it negative
        arr[start] = -arr[start];
        
        // 5. Try jumping Right OR jumping Left recursively
        bool canReachFromRight = canReach(arr, start + jumpValue);
        bool canReachFromLeft = canReach(arr, start - jumpValue);
        
        return canReachFromRight || canReachFromLeft;
    }
};

int main(){

}