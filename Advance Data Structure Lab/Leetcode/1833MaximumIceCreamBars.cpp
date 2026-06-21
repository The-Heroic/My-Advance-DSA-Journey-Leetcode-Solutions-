#include <bits\stdc++.h>
using namespace std;

// greedy logic
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());

        int count =0;
        int sum=0;
       
        for(int i = 0; i< costs.size(); i++){
            
            sum = sum + costs[i];
            if(sum>coins){
                return count;
            }
            count++;
        }
    
        return count;
    }
};


// count sort logic


class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = 0;
        for (int c : costs) {
            maxCost = max(maxCost, c);
        }

        vector<int> freq(maxCost + 1, 0);
        for (int c : costs) {
            freq[c]++;
        }

        int count = 0;

        for (int price = 1; price <= maxCost; price++) {
            if (freq[price] == 0) continue; 

            if (coins < price) {
                break;
            }

            int maxCandy = coins / price;
            
            int candyCan = min(freq[price], maxCandy);

            count += candyCan;
            coins -= candyCan * price;
        }

        return count;
    }
};


int main(){

}