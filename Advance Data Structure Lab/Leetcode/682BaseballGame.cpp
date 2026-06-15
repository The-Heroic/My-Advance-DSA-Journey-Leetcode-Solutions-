#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {

        // a new vector for storing the score
        // an int variable to keep track of the last integer
        vector<int> score;
        
        for(int i =0; i<operations.size(); i++)
    }
};

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> out;

        for(string x:operations){
            if(x=="+"){ int n=out.size();out.push_back(out[n-1]+out[n-2]); }
            else if(x=="D"){ int n=out.size(); out.push_back(out[n-1]*2); }
            else if(x=="C"){out.pop_back();}
            else out.push_back(stoi(x));
        }
        int sum=0;
    for(int x:out){ sum+=x;}
     
     return sum;
    }
};


int main(){

}