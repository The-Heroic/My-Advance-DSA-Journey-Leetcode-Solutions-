#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, vector<int>> reserved;
        for (const auto& r : reservedSeats) {
            reserved[r[0]].push_back(r[1]);
        }

        int totalGroups = 2 * (n - (int)reserved.size());

        for (const auto& [row, seats] : reserved) {
            bool left = true, middle = true, right = true;

            for (int seat : seats) {
                if (seat == 2 || seat == 3) left = false;
                if (seat == 4 || seat == 5) { left = false; middle = false; }
                if (seat == 6 || seat == 7) { middle = false; right = false; }
                if (seat == 8 || seat == 9) right = false;
            }

            if (left && right) {
                totalGroups += 2;
            } else if (left || middle || right) {
                totalGroups += 1;
            }
        }

        return totalGroups;
    }
};

int main(){}