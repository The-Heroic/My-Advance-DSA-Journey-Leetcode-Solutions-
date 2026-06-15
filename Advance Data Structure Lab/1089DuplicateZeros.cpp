#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int original_size = arr.size();
        int i = 0;
        
        while (i < original_size) {
            if (arr[i] == 0) {
                arr.insert(arr.begin() + i, 0);
                i += 2; 
            }
             else {
                i++;
            }
        }
        arr.erase(arr.begin() + original_size, arr.end());
    }
};

int main(){


}