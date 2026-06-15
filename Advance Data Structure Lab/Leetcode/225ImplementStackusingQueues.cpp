#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
        // Constructor - queue is initialized automatically
    }
    
    // Push is O(n) because of rotation
    void push(int x) {
        int size = q.size();
        q.push(x);

        // Rotate the previous elements to the back
        for (int i = 0; i < size; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    // Pop is O(1) because top is already at the front
    int pop() {
        if (q.empty()) return -1;
        int val = q.front();
        q.pop();
        return val;
    }
    
    // Top is O(1)
    int top() {
        if (q.empty()) return -1;
        return q.front();
    }
    
    // Empty check
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main(){

}