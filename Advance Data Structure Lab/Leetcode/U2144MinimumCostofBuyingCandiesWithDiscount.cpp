#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int minimumCost(vector<int>& cost) {
        // Sort the candies from most expensive to cheapest
        sort(cost.rbegin(), cost.rend());
        
        int total_cost = 0;
        
        // Every 3rd candy (indices 2, 5, 8, ...) will be free
        for (int i = 0; i < cost.size(); i++) {
            if (i % 3 != 2) {
                total_cost += cost[i];
            }
        }
        
        return total_cost;
    }
};

int main(){


}