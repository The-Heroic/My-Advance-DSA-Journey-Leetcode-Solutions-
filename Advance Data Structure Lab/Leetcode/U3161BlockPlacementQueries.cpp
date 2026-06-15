#include <bits\stdc++.h>
using namespace std;

class SegmentTree {
private:
    int n;
    vector<int> tree;

public:
    SegmentTree(int n) : n(n), tree(4 * n, 0) {}

    // Point Update: Updates the gap size at a specific obstacle index
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] = val;
            return;
        }
        int mid = start + (end - start) / 2;
        if (idx <= mid) {
            update(2 * node, start, mid, idx, val);
        } else {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        tree[node] = max(tree[2 * node], tree[2 * node + 1]);
    }

    // Range Maximum Query: Finds the maximum gap size within [l, r]
    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0;
        if (l <= start && end <= r) return tree[node];
        int mid = start + (end - start) / 2;
        return max(query(2 * node, start, mid, l, r),
                   query(2 * node + 1, mid + 1, end, l, r));
    }
};

class Solution {
public:
    vector<bool> getResults(vector<vector<int>>& queries) {
        // Dynamically find the upper bound for the coordinate space
        int M = 50005;
        for (const auto& q : queries) {
            M = max(M, q[1]);
        }

        // Initialize Segment Tree and obstacle tracker
        SegmentTree st(M + 2);
        set<int> obstacles;
        
        // Sentinels: 0 is the start, M + 1 acts as a safe right boundary
        obstacles.insert(0);
        obstacles.insert(M + 1);
        st.update(1, 0, M + 1, M + 1, M + 1);

        vector<bool> results;

        for (const auto& q : queries) {
            int type = q[0];
            int x = q[1];

            if (type == 1) {
                // Find adjacent obstacles
                auto it = obstacles.upper_bound(x);
                int next_obs = *it;
                int prev_obs = *prev(it);

                // Update the split gap positions in the Segment Tree
                st.update(1, 0, M + 1, x, x - prev_obs);
                st.update(1, 0, M + 1, next_obs, next_obs - x);

                // Place the obstacle
                obstacles.insert(x);
            } 
            else if (type == 2) {
                int sz = q[2];

                // Locate the last obstacle before or at position x
                auto it = obstacles.upper_bound(x);
                int prev_obs = *prev(it);

                // 1. Get max complete gap completely to the left of prev_obs
                int max_left_gap = st.query(1, 0, M + 1, 0, prev_obs);
                
                // 2. Get the remaining fractional space up to x
                int current_gap = x - prev_obs;

                // Check if the best available gap accommodates the requested size
                results.push_back(max(max_left_gap, current_gap) >= sz);
            }
        }

        return results;
    }
};

int main(){

}