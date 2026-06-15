#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;


// Definition for singly-linked list.
    struct ListNode {
    int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int value) {
        while (head != NULL && head->val == value) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        if (head == NULL) return head;

        ListNode* current = head;
        while(current->next != NULL) {
            if (current->next->val == value) {
                ListNode* targetNode = current->next;
                current->next = targetNode->next;
                delete targetNode;
            }
            else {
                current = current->next;
            }
        }
        
        return head;
    }
};

int main(){

}
