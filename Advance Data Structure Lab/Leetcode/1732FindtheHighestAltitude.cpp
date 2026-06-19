#include <bits\stdc++.h>
using namespace std;

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_altitude = 0;
        int current_altitude = 0;
        
        for (int g : gain) {
            current_altitude += g;
            max_altitude = max(max_altitude, current_altitude);
        }
        
        return max_altitude;
    }
};

int main(){

}