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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) return true;

        // 1. Calculate Length
        ListNode* temp = head;
        int length = 0;
        while (temp != nullptr) {
            temp = temp->next;
            length++;
        }

        // 2. Store first half
        vector<int> xfactor;
        ListNode* current = head;
        for (int i = 0; i < length / 2; i++) {
            xfactor.push_back(current->val);
            current = current->next;
        }

        // 3. Handle Odd Length: Skip the middle node
        if (length % 2 != 0) {
            current = current->next;
        }

        // 4. Compare with second half
        int n = xfactor.size();
        while (current != nullptr) {
            if (xfactor[n - 1] != current->val) {
                return false;
            }
            current = current->next;
            n--;
        }

        return true;
    }
};

int main(){

}