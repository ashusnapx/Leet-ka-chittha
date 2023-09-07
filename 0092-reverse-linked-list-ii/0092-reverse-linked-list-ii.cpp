/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* reverseBetween(ListNode *head, int left, int right)
        {
            if (!head || left == right) return head;
            ListNode *dummy = new ListNode(0);
            dummy->next = head;
            ListNode *prev = dummy;
            ListNode *curr = head;
            for (int i = 0; i < left - 1; i++)
            {
                prev = curr;
                curr = curr->next;
            }
            ListNode *tail = curr, *prev2 = NULL;
            for (int i = left; i <= right; i++)
            {
                ListNode *nxt = curr->next;
                curr->next = prev2;
                prev2 = curr;
                curr = nxt;
            }
            prev->next = prev2;
            tail->next = curr;
            return dummy->next;
        }
};