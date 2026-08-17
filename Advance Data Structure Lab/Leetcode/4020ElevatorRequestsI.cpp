#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totalTime = 0;
        int currFloor = 0;

        for(int floor: requests){
            totalTime += abs(floor -currFloor);
            currFloor = floor;
        }
            return totalTime;
    }
};

int main(){

}