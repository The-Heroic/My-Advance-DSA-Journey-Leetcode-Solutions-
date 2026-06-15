#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    vector<string> strs = {"Flower", "Flow", "Flowing"};
    for(int i = 0; i<strs[0].length();i++){
        for(int j=1;j<strs[j].length();j++){
            cout<<strs[i][j];
        }
    }
    return 0;
}