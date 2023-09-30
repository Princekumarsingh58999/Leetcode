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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return head;
        if (head->next==NULL)
            return head;
        ListNode* dummy=new ListNode(0);
        ListNode* cur=head;
         ListNode* temp=dummy;
        while(cur!=NULL && cur->next!=NULL){
           temp->next=cur->next;
            cur->next=temp->next->next;
            temp->next->next=cur;
            
            temp=cur;
            cur=cur->next;
            

        }
        return dummy->next;
    }
};