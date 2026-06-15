#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i = 1; i<n+1; i++){
            if(i%3==0 && i%5==0){
                answer.push_back("FizzBuzz");
            }
            else if(i%3==0){
                answer.push_back("Fizz");
            }
            else if(i%5==0){
                answer.push_back("Buzz");
            }
            else{
                string key = to_string(i);
                answer.push_back(key);
            }
        }
        return answer;
    }
};

int main(){
    int num;
    cin>>num;
    Solution sol;
    vector<string> result = sol.fizzBuzz(num);
    for(string i : result){
        cout<< i<<", ";
    }

}