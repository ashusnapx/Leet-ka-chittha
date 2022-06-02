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
        ListNode* deleteDuplicates(ListNode *head)
        {
            if (head == nullptr)
            {
                return head;
            }
            else if (head->next == nullptr)
            {
                return head;
            }
            else
            {
                ListNode *current = head;
                ListNode *nexty = head->next;

                while (nexty != nullptr)
                {
                    if (current->val == nexty->val)
                    {
                        current->next = nexty->next;
                        delete nexty;
                        nexty = current->next;
                    }
                    else
                    {
                        current = current->next;
                        nexty = nexty->next;
                    }
                }
            }
            return head;
        }
};