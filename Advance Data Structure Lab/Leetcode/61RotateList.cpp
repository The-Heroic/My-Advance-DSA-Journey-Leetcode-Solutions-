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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }



        for(int i = 0;i<k;i++){
            ListNode* current = head;
            ListNode* extreme = head;
            while(extreme->next!= NULL){
                extreme = extreme->next;
            }
            
            extreme->next= current;
        
            extreme = head;
        

            while(current->next!= extreme){
                current = current -> next;
            }
            current->next= NULL;
        }
        return head;
    }
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) {
            return head; 
        }

        ListNode* temp = head;
        int length = 1;
        while (temp->next != NULL) {
            temp = temp->next;
            length++;
        }
        k = k % length; 
        if (k == 0) return head;

        for (int i = 0; i < k; i++) {
            ListNode* extreme = head;
            ListNode* beforeExtreme = NULL;

            while (extreme->next != NULL) {
                beforeExtreme = extreme;
                extreme = extreme->next;
            }

            extreme->next = head;
            head = extreme;             
            beforeExtreme->next = NULL; 
        }

        return head;
    }
};

int main(){

}