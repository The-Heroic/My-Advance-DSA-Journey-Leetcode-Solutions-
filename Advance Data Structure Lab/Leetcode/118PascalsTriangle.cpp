#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows,) {
        vector<vector<int>> Fanswer;

        for (int i = 0; i < numRows; i++) {
        
            vector<int> row(i + 1, 1);

            for (int j = 1; j < i; j++) {

                
                row[j] = Fanswer[i - 1][j - 1] + Fanswer[i - 1][j];
                // if (j==rowIndex){
                //     return row[j];
                }
            }
        
            Fanswer.push_back(row);
        }
        
        return Fanswer;
    }
};

int main(){
    int num;
    cin>>num;

    Solution sol;
    vector<vector<int>> result = sol.generate(num);
    for(vector<int> c : result){
        for(int val: c){
            cout<< val<<" ";
        }
    }

}