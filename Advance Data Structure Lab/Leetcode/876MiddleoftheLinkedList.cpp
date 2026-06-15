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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }

        ListNode* temp = head;
        int length = 1;

        while(temp->next!= NULL){
            temp = temp->next;
            length++;
        }
        ListNode* current = head;
        if(length % 2  ==0){
            for(int i= 0; i< length/2; i++){
                current = current->next;
            }
            head = current;
        }

        if(length % 2  !=0){
            for(int i= 0; i< length/2; i++){
                current = current->next;
            }
            head = current;
        }
    
    return head;
    }
};


class Solution1 {
public:
    ListNode* middleNode(ListNode* head) {
        // Initializing both pointers at the head
        ListNode* slow = head;
        ListNode* fast = head;

        // While fast can move two steps ahead...
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;          // Move 1 step
            fast = fast->next->next;    // Move 2 steps
        }

        // When fast reaches the end, slow is at the middle
        return slow;
    }
};

int main(){

}