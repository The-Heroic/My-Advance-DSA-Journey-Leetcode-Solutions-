#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        // Step 1: Find the total amount of apples to redistribute
        int totalApples = accumulate(apple.begin(), apple.end(), 0);
        
        // Step 2: Sort boxes by capacity in descending order
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        int boxesUsed = 0;
        
        // Step 3: Pick the largest boxes until all apples are covered
        for (int i = 0; i < capacity.size(); i++) {
            totalApples -= capacity[i];
            boxesUsed++;
            
            if (totalApples <= 0) {
                break;
            }
        }
        
        return boxesUsed;
    }
};
int main(){

}