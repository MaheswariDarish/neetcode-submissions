/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *currnode,*prev=nullptr,*next;
        currnode=head;
        while(currnode!=nullptr){
            next=currnode->next;
            currnode->next=prev;
            prev=currnode;
            currnode=next;
        }
        return prev;
    }
};
