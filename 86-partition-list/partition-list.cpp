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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp=head;
        ListNode *less=new ListNode(0);
        ListNode*lesstemp=less;

        ListNode*great=new ListNode(0);
        ListNode*greattemp=great;
       while(temp!=NULL){
        if(temp->val<x){
            lesstemp->next=new ListNode(temp->val);
            lesstemp=lesstemp->next;
        }
        else{
            greattemp->next=new ListNode(temp->val);
            greattemp=greattemp->next;
        }
        temp=temp->next;
       }
       lesstemp->next=great->next;
       return less->next;
    }
};