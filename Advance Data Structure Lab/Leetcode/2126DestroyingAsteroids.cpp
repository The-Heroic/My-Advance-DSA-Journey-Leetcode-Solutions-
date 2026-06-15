#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long massSum = mass;
        sort(asteroids.begin(), asteroids.end());
        for(int i= 0; i<asteroids.size(); i++){
            if(massSum >= asteroids[i]){
                massSum += asteroids[i];

            }
            else{
                return false;
            }

        }
    return true;
    }
};

int main(){

    
}