/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            ListNode *a = headA;
            ListNode *b = headB;

            set<ListNode*> s;

            while (a != nullptr)
            {
                s.insert(a);
                a = a->next;
            }
            while (b != nullptr)
            {
                if (s.find(b) != s.end())
                {
                    return b;
                }
                else
                {
                    b = b->next;
                }
            }

            return nullptr;
        }
};