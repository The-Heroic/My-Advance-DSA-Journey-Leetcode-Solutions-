#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int countL = 0;
        int countR = 0;
        int countBlank = 0;
        
        // Count the total occurrences of each character globally
        for (char c : moves) {
            if (c == 'L') countL++;
            else if (c == 'R') countR++;
            else countBlank++;
        }
        
        // The optimal distance is the gap between L and R, 
        // plus turning every single underscore into the dominant direction.
        return abs(countL - countR) + countBlank;
    }
};


int main(){

}