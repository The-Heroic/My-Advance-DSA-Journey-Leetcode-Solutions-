#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> pairs;
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        int start = 0;
        int end = start+1;
        while(start<arr.size()-1){
            if(abs(arr[start]-arr[end]) < minDiff){
                minDiff = abs(arr[start]-arr[end]);
            }
            start++;
            end = start+1;
        }
        start =0;
        end= start+1;
        while(start<arr.size()-1){
            if(abs(arr[start]-arr[end]) == minDiff){
                pairs.push_back({arr[start], arr[end]});
            }
            start++;
            end = start+1;

        }
        return pairs;
    }
};


class Solution1 {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> pairs;
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        int start = 0;
        int end = start+1;
        for(int i =0; i<arr.size()-1; i++){
            int diff = arr[i+1]- arr[i];

            if(diff<minDiff){
                minDiff = diff;
                pairs.clear();
                pairs.push_back({arr[i], arr[i+1]});
            }
            else if(diff == minDiff){
                pairs.push_back({arr[i], arr[i+1]});
            }
        }

        return pairs;
    }
};


int main(){
 vector<int> arr = {4,2,1,3};

 Solution sol;

 sol.minimumAbsDifference(arr);

}