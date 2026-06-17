#include <bits\stdc++.h>
using namespace std;


struct ListNode {
    int val;
     ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode* currA = headA;
        ListNode* currB = headB;

        // 1. Separate traversal to find the length of List A
        while (currA != nullptr) {
            lenA++;
            currA = currA->next;
        }

        // 2. Separate traversal to find the length of List B
        while (currB != nullptr) {
            lenB++;
            currB = currB->next;
        }

        // Reset iterators back to the beginning
        currA = headA;
        currB = headB;

        // 3. Move the pointer of the longer list ahead by the difference
        if (lenA > lenB) {
            int diff = lenA - lenB;
            for (int i = 0; i < diff; i++) {
                currA = currA->next;
            }
        } else {
            int diff = lenB - lenA;
            for (int i = 0; i < diff; i++) {
                currB = currB->next;
            }
        }

        // 4. Traverse concurrently; they are now perfectly synchronized
        while (currA != currB) {
            currA = currA->next;
            currB = currB->next;
        }

        // Will return the intersection node, or nullptr if they reached the end without meeting
        return currA;
    }
};

int main (){

}