#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 7));
        int day = stoi(date.substr(8, 10));
        
        string binaryYear = bitset<32>(year).to_string();
        string binarymonth = bitset<32>(month).to_string();
        string binaryday = bitset<32>(day).to_string();

        size_t first = binaryYear.find('1');
        size_t second = binarymonth.find('1');
        size_t third = binaryday.find('1');
        string BitDate = binaryYear.substr(first, binaryYear.size())  + "-" + binarymonth.substr(second, binarymonth.size()) + "-" + binaryday.substr(third, binaryday.size());
    return BitDate;
    }
    
        
    
};


int main(){
    string date;
    getline(cin, date);

    Solution sol;
    cout<<sol.convertDateToBinary(date);
}