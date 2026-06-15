#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";
     int left=0;
     int right= 5 - 1;
        while (left<right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
        cout<<"reversed String: "<< s;
        
    return 0;
    }