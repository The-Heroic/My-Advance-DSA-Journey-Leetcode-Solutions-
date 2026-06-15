#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
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
    ListNode* reverseList(ListNode* head) {
        vector<int> temp;
        if(head==NULL){
            return 0;
        }
        ListNode* current = head;


        while(current!=NULL){
            temp.push_back(current->val);
            current=current->next;
        }

        ListNode* current2 = head;
        int i = temp.size()-1;
        while(current2!=NULL){
                current2->val=temp[i];
                i--;
                current2=current2->next;
        }
        return head;
    }
};

int main(){

}