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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
            ListNode* cur=head;
        while(cur!=NULL){
            v.push_back(cur->val);
            cur=cur->next;
            int p=0;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]!=v[v.size()-i-1])
                return false;
        }
       return true;
    }
};