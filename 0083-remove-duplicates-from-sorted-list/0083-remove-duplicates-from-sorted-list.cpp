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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        while(cur!=NULL && cur->next!=NULL){
            if(cur->val==cur->next->val){
                ListNode* temp=cur->next;
            cur->next=cur->next->next;
           delete(temp);}
            else
            cur=cur->next;
        }
        return head;
    }
};