#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceSoFar = INT_MAX;
        int maxProfitFound = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPriceSoFar) {
                minPriceSoFar = prices[i];
            }
            else if (prices[i] - minPriceSoFar > maxProfitFound) {
                maxProfitFound = prices[i] - minPriceSoFar;
            }
        }

        return maxProfitFound;
    }
};

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    Solution sol;

    cout<< sol.maxProfit(prices);

}