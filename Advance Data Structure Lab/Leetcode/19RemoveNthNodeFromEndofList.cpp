
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

       if (length == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

       ListNode* curr = head;
        for (int i = 0; i < length - n - 1; i++) {
            curr = curr->next;
        }

       ListNode* nodeToDelete = curr->next;
        curr->next = curr->next->next;
        
        delete nodeToDelete; 

        return head;
    }
};

int main(){
    
}