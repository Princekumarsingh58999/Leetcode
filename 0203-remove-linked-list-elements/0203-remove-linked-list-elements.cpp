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
    ListNode* removeElements(ListNode* head, int val1) {
        if(head==NULL)
            return NULL;
        
        ListNode* p=new ListNode();
        p->next=head;
      ListNode* cur=p;
        while(cur->next!=NULL){
              if(cur->next->val==val1){
            cur->next=cur->next->next;
        } 
        else{
            cur=cur->next;
        }    
           
        }
        
        return p->next;
    }
};