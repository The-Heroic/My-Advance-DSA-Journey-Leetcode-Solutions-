
 struct ListNode {
     int val;
     ListNode *next;
   ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        int targetIndex = (length / 2) - 1;

        ListNode* curr = head;
        for (int i = 0; i < targetIndex; i++) {
            curr = curr->next;
        }

        ListNode* middle = curr->next;
        curr->next = curr->next->next;
        
        delete middle; 

        return head;
    }
};