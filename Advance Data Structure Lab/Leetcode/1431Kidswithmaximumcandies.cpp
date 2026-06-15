#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
// class Solution {
// public:
//     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
//         vector<bool> result;

//         int maxVal = (*max_element(candies.begin(), candies.end())+extraCandies);
//         int minVal = (*min_element(candies.begin(), candies.end())+extraCandies);;
//         for(int i =0; i<candies.size();i++){
//             if((candies[i]+extraCandies<=maxVal) && (candies[i]+extraCandies>minVal) && ((candies[i]+extraCandies)<(*min_element(candies.begin(), candies.end())))){
//                 result.push_back(true);
//             }
//             else{
//                 result.push_back(false);
//             }
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxVal=0;
        for(int c:candies){
            maxVal = max(maxVal, c);
        }

        for(int c: candies){
            result.push_back(c+extraCandies>=maxVal);

        }
        return result;
    }
};
int main(){
    vector<int> candies = {2,3,5,1,3};
    Solution sol;
    vector<bool> res =sol.kidsWithCandies(candies, 3);
    
    for(int a: res){
        cout<<a;
    }
    return 0;

}