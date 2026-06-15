#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct ListNode {
    int val;
      ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Step 1: Handle the empty or single-node list
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Step 2: Initialize our scout at the start
        ListNode* current = head;

        // Step 3: Traverse until the end of the line
        while (current != nullptr && current->next != nullptr) {
            // Step 4: Compare current value with the neighbor
            if (current->val == current->next->val) {
                // If they match, skip the neighbor
                // We point our current 'next' to the neighbor's 'next'
                current->next = current->next->next;
                
                // Note: We do NOT move 'current' forward here.
                // We stay to check the new neighbor in the next loop.
            } else {
                // If they differ, the path is safe. Advance the scout!
                current = current->next;
            }
        }

        // Step 5: Return the cleaned head
        return head;
    }
};

int main(){
  ListNode Noding;
  Solution sol;
  Noding
}