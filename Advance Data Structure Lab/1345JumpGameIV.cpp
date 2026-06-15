#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;

        unordered_map<int, vector<int>> graph;
        for (int i = 0; i < n; i++) {
            graph[arr[i]].push_back(i);
        }

        queue<int> q;
        vector<bool> visited(n, false);

        q.push(0);
        visited[0] = true;
        int steps = 0;

        while (!q.empty()) {
            int currentLevelSize = q.size();
            
            for (int i = 0; i < currentLevelSize; i++) {
                int curr = q.front();
                q.pop();

                if (curr == n - 1) return steps;

                if (curr + 1 < n && !visited[curr + 1]) {
                    visited[curr + 1] = true;
                    q.push(curr + 1);
                }

                if (curr - 1 >= 0 && !visited[curr - 1]) {
                    visited[curr - 1] = true;
                    q.push(curr - 1);
                }

                if (graph.find(arr[curr]) != graph.end()) {
                    for (int nextIdx : graph[arr[curr]]) {
                        if (!visited[nextIdx]) {
                            visited[nextIdx] = true;
                            q.push(nextIdx);
                        }
                    }
                    graph.erase(arr[curr]);
                }
            }
            steps++;
        }

        return -1;
    }
};
    


int main(){

}