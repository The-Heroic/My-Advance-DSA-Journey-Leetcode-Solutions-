#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
class ListNode{
public:
    int val;
    ListNode* next;
    ListNode(int x){
        val =x;
        next = NULL;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL){
            return false;
        }
        
        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        
            if(slow == fast){
                return true;
            }
        }
    return false;
    }
};

int main(){

}