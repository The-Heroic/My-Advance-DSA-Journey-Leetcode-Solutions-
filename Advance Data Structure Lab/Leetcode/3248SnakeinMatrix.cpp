#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int row = 0;
        int col = 0;
        for(string x : commands){
            if(x == "RIGHT"){
                col++;
            }
            else if(x == "LEFT"){
                col--;
            }
            else if(x == "UP"){
                    row--;
                }
            else if(x == "DOWN"){
                row++;
            }
        }
    return ((row * n)+ col);
    }
};


class Solution1 {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        // Step 1: Define the explicit direction map
        // Key: Command string, Value: pair of {row_offset, col_offset}
        unordered_map<string, pair<int, int>> dirMap = {
            {"UP",    {-1,  0}},
            {"DOWN",  { 1,  0}},
            {"LEFT",  { 0, -1}},
            {"RIGHT", { 0,  1}}
        };

        int row = 0;
        int col = 0;

        // Step 2: Traverse using the map
        for (const string& cmd : commands) {
            // Fetch the offset directly and apply it
            row += dirMap[cmd].first;
            col += dirMap[cmd].second;
        }

        // Step 3: Map back to 1D index
        return (row * n) + col;
    }
};

int main(){

}