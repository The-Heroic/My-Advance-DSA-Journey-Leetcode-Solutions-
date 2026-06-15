#include <bits\stdc++.h>
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL){
            return NULL;
        }

        ListNode* temp = head;
        int length = 1;
        while(temp->next!=NULL){
            temp= temp->next;
            length++;
        }

// The left tail
        ListNode* leftTail = head;
        int NodeLength = 0;
        while(NodeLength <left){
            leftTail=leftTail->next;
            NodeLength++;
        }
// The Sub list
        ListNode* subList = leftTail->next;
        while(NodeLength<right){
            subList = subList->next;
            NodeLength++;
        }
// The right tail
        ListNode* rightTail = subList->next;
        while(NodeLength<=length){
            rightTail = subList->next;
            NodeLength++;
        }

        for(int i =NodeLength; i<right ; i++){
            current
        }
    }
};

class Solution1 {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        // 1. Create a dummy node to act as a permanent anchor before the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // 2. Move 'prev' to the node exactly BEFORE the reversal starts
        ListNode* prev = dummy;
        for (int i = 0; i < left - 1; i++) {
            prev = prev->next;
        }

        // 3. 'curr' is the first node of the sub-list (will become the sub-list's tail)
        // 'forward' is the node we are about to move to the front
        ListNode* curr = prev->next;
        
        // 4. Perform the reversal (right - left) times
        for (int i = 0; i < right - left; i++) {
            ListNode* forward = curr->next;
            
            // Re-linking steps:
            curr->next = forward->next;      // 1. Curr skips forward
            forward->next = prev->next;      // 2. Forward points to current segment front
            prev->next = forward;            // 3. Prev points to the new front (forward)
        }

        // 5. Cleanup and return
        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
    }
};

int main(){

}