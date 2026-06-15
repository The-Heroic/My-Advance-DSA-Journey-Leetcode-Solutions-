#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string>inputs;
    string temp;
    int n;
    cin>>n;
    cin.ignore();
    for (int i=1;i<=n;i++){
        getline(cin, temp);
        inputs.push_back(temp);
    }
    for(int i=0;i<inputs.size();i++){
        if(inputs[i].length()>10){
            cout<<inputs[i].at(0)<< (inputs[i].length()-2)<<inputs[i].at(inputs[i].length()-1)<<endl;
        }
        else {
            cout<<inputs[i]<<endl;
        }
    }
    return 0;
}