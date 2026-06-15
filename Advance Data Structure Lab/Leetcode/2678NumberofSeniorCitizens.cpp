#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count =0;
        for(string x : details){
            string ageString = x.substr(11, 2);
            int age = stoi(ageString);
            if(age>60){
                count++;
            }
        }
    return count;
    }
};

int main(){

}