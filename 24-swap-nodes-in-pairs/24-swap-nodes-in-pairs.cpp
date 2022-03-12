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
    ListNode* swapPairs(ListNode* head) 
    {
          if(!head) {
            return head;
        }
        ListNode* prev = head;
        ListNode* curr=head->next;
        if(curr) {
            head=curr;
        }
        ListNode* next=NULL, *t=NULL;
        while(curr) {
            next = curr->next;
            curr->next=prev;
            prev->next = next;
            if(t) {
                t->next = curr;
            }
            if(!next) break;
            curr = next->next;
            t = prev;
            prev = next;
        }
        return head;
    }
};