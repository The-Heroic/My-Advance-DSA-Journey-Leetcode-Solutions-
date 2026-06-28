#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        if(arr[0] != 1){
                arr[0]=1;
            }
        for(int i =0; i<arr.size(); i++){
            
            if(i>0 && (arr[i]-arr[i-1] != 1 || arr[i]-arr[i-1] > 1)){
                arr[i] = arr[i-1]+1;
            }
        }

        int maxEle = *max_element(arr.begin(), arr.end());

        return maxEle;
    }
};


optimized:

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        vector<int> counts(n + 1, 0);

        for (int x : arr) {
            if (x > n) {
                counts[n]++;
            } else {
                counts[x]++;
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = min(ans + counts[i], i);
        }

        return ans;
    }
};
int main(){

}