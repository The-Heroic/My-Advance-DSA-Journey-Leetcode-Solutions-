#include <bits\stdc++.h>
using namespace std;

class Solution {
public:

    double getMin(double x, double y) {
    return (x < y) ? x : y;
    }
    
    double angleClock(int hour, int minutes) {
        int h = hour;
        int m = minutes;

        h = h % 12;

        double hrAngle = 0.5 * (h * 60 + m);

        double minAngle = 6 * m;

        double angle = fabs(hrAngle - minAngle);

    return getMin(360.0 - angle, angle);
    }
};

    

int main(){

}