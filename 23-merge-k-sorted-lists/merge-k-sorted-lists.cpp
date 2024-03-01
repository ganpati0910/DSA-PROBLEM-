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
    ListNode*convert(vector<int>&inti){
        if (inti.empty())
        return nullptr;
        ListNode*head=new ListNode(inti[0]);
        ListNode*temp=head;
        for(int i=1; i<inti.size(); i++){
            ListNode*temp1=new ListNode(inti[i]);
            temp->next=temp1;
            temp=temp->next;
        }
        temp->next=nullptr;
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists){
        vector<int>inti;
        for(int i=0; i<lists.size(); i++){
            ListNode *temp=lists[i];
            while(temp!=NULL){
                inti.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(inti.begin(),inti.end());
        ListNode* head1 =convert(inti);
        return head1;
    }
};