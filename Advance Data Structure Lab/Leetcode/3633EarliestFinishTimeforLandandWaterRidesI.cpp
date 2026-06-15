#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, 
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int min_overall_finish = INT_MAX;

        // Loop through every possible pair of land and water rides
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                
                // Option A: Experience Land Ride 'i' first, then Water Ride 'j'
                int finish_land = landStartTime[i] + landDuration[i];
                int start_water = max(finish_land, waterStartTime[j]);
                int total_finish_A = start_water + waterDuration[j];

                // Option B: Experience Water Ride 'j' first, then Land Ride 'i'
                int finish_water = waterStartTime[j] + waterDuration[j];
                int start_land = max(finish_water, landStartTime[i]);
                int total_finish_B = start_land + landDuration[i];

                // Capture the best timeline for this specific pair
                int best_for_this_pair = min(total_finish_A, total_finish_B);

                // Update our global minimum finish time
                min_overall_finish = min(min_overall_finish, best_for_this_pair);
            }
        }

        return min_overall_finish;
    }
};

int main(){

}