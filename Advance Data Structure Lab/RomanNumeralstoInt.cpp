#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        for(int i=0; i<s.size();i++){
            if(s.at(i)=='I'){
                num = num + 1;
            }
            else if(s.at(i)=='V'){
                num = num + 5;
                    if(s.at(i-1)=='I'){
                        num= num-1;
                    }
            }
            else if(s.at(i)=='X'){
                num = num + 10;
            }
            else if(s.at(i)=='L'){
                num = num + 50;
                    if(s.at(i-1)=='X'){
                        num= num-10;
                    }
            }
            else if(s.at(i)=='C'){
                num = num + 100;
            }
            else if(s.at(i)=='D'){
                num = num + 500;
                    if(s.at(i-1)=='C'){
                        num= num-100;
                    }
            }
            else if(s.at(i)=='M'){
                num = num + 1000;
            }
        }   
        return num;
    }
};

int main(){
    Solution sol;
    string s;
    getline(cin, s);

    cout<<sol.romanToInt(s);


}