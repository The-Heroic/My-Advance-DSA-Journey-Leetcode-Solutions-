#include <bits\stdc++.h>
using namespace std;


class Solution {
private:
    int checkOptimalOrder(const vector<int>& startA, const vector<int>& durA, 
                           const vector<int>& startB, const vector<int>& durB) {
        int n = startA.size(), m = startB.size();
        
        // 1. Get sorted finish times of Category A
        vector<int> FA(n);
        for (int i = 0; i < n; i++) FA[i] = startA[i] + durA[i];
        sort(FA.begin(), FA.end());

        // 2. Get Category B sorted by opening times
        vector<pair<int, int>> B(m);
        for (int i = 0; i < m; i++) B[i] = {startB[i], durB[i]};
        sort(B.begin(), B.end());

        // 3. Precalculate Suffix Minimums for B (when we must wait: start + duration)
        vector<int> suffMinTotal(m + 1, INT_MAX);
        for (int i = m - 1; i >= 0; i--) {
            suffMinTotal[i] = min(suffMinTotal[i + 1], B[i].first + B[i].second);
        }

        int absolute_min_finish = INT_MAX;
        int j = 0, min_dur_prefix = INT_MAX;

        // 4. Single pass two-pointer sweep
        for (int f_a : FA) {
            // Expand the prefix of B rides that are already open
            while (j < m && B[j].first <= f_a) {
                min_dur_prefix = min(min_dur_prefix, B[j].second);
                j++;
            }
            
            // Case 1: Use an already-open ride from B (no waiting)
            if (min_dur_prefix != INT_MAX) {
                absolute_min_finish = min(absolute_min_finish, f_a + min_dur_prefix);
            }
            // Case 2: Use a future ride from B (must wait)
            if (j < m) {
                absolute_min_finish = min(absolute_min_finish, suffMinTotal[j]);
            }
        }

        return absolute_min_finish;
    }

public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, 
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        return min(checkOptimalOrder(landStartTime, landDuration, waterStartTime, waterDuration),
                   checkOptimalOrder(waterStartTime, waterDuration, landStartTime, landDuration));
    }
};

int main(){


}