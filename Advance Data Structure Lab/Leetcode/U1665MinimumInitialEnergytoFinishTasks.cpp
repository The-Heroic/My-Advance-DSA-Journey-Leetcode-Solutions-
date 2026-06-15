#include <bits\stdc++.h>
using namespace std;
class Solution1{
public:
    int minimumEffort(vector<vector<int>>& tasks) {
    // Your original setup
    vector<vector<int>> tasks = {{1, 3}, {2, 4}, {10, 11}, {10, 12}, {8, 9}};
    
    // Step 1: Sorting (Still necessary for the greedy order)
    sort(tasks.begin(), tasks.end(), [](const vector<int>& a, const vector<int>& b) {
        return (a[1] - a[0]) > (b[1] - b[0]);
    });

    // Step 2: Calculate a starting point for brute force
    // We must have at least enough energy to cover the actual costs
    int totalCost = 0;
    for(auto& t : tasks) totalCost += t[0];

    int currentTry = totalCost; // Start checking from total cost
    bool found = false;

    // Step 3: The while loop you were thinking of
    while (!found) {
        int tempEnergy = currentTry;
        bool canFinish = true;

        // Check if currentTry works for all n terms
        for (const auto& x : tasks) {
            int actual = x[0];
            int minimum = x[1];

            if (tempEnergy < minimum) {
                canFinish = false;
                break; // This energy failed, stop checking this run
            }
            tempEnergy -= actual;
        }

        if (canFinish) {
            found = true; // We found the minimum effort!
        } else {
            currentTry++; // Try the next energy level
        }
    }

    cout << "Minimum Initial Energy Required: " << currentTry << endl;

    return 0;
    }   

};
 
class Solution {
public:
    /**
     * Step 1: The Check Function
     * This simulates the process to see if a starting energy level 
     * is enough to finish every task in the sorted list.
     */
    bool canComplete(int initialEnergy, const vector<vector<int>>& tasks) {
        int currentEnergy = initialEnergy;
        for (const auto& task : tasks) {
            int actual = task[0];
            int minimum = task[1];
            
            // If current energy is less than the starting requirement
            if (currentEnergy < minimum) {
                return false;
            }
            
            // Subtract the actual cost of the task
            currentEnergy -= actual;
        }
        return true;
    }

    int minimumEffort(vector<vector<int>>& tasks) {
        // Step 2: The Greedy Sort
        // We sort by (minimum - actual) in descending order.
        // This ensures tasks with high 'buffer' requirements are handled when 
        // we have the most energy available.
        sort(tasks.begin(), tasks.end(), [](const vector<int>& a, const vector<int>& b) {
            return (a[1] - a[0]) > (b[1] - b[0]);
        });

        // Step 3: Binary Search Range
        // 'low' is the sum of all actual costs (minimum possible energy consumed).
        // 'high' is a safe upper bound (like the sum of all requirements).
        int low = 0;
        for (auto& t : tasks) low += t[0]; 
        int high = 1e9; 
        int result = high;

        // Step 4: The 'While' Loop (Binary Search)
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (canComplete(mid, tasks)) {
                result = mid;      // This energy works! Try a smaller one.
                high = mid - 1;
            } else {
                low = mid + 1;     // Not enough energy, we need more.
            }
        }
        
        return result;
    }
};

int main(){
vector<vector<int>> tasks = {{1,3},{2,4},{10,11},{10,12},{8,9}};
sort(tasks.begin(), tasks.end());
vector<int> remains;

for(vector<int> x: tasks){
    int diff = 0;
    for(int k: x){
        diff = abs(diff -k);

    }
    cout<<diff<<" ";
    remains.push_back(diff);

}

int sum = accumulate(remains.begin(), remains.end(), 0);
cout<<sum;

while(){}
}