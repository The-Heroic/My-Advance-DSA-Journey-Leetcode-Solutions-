#include <string>
#include <iostream>
#include <vector>
using namespace std;
void reverseaNum(int n){
    int Mfactor =1;
    while (n > 0) {
        
        int digit = n % 10;
        cout << digit*Mfactor << " ";
        Mfactor = Mfactor *10;
        n = n / 10;
    }
}

string integerToRoman(int num){
    reverseaNum(num);
    
}
int main(){
    int num;
    cin>>num;
    reverseaNum(num);
}
