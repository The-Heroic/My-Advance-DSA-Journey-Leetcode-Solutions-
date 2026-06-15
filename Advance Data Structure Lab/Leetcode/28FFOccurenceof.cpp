#include <iostream>
#include <string>
using namespace std;
int main(){
    string haystack;
    string needle;
    cout<<"Enter the string: "<<endl;
    getline(cin, haystack);

    cout<<"Enter the Needle string: "<<endl;
    getline(cin, needle);

   int pos = haystack.find(needle);
    cout<<pos;
}