/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* removeNth(ListNode *head, int n)
        {
            if (head == nullptr || n <= 0) return nullptr;

            if (n == 1)
            {
                ListNode *temp = head;
                head = head->next;
                delete temp;
                return head;
            }

            ListNode *prev = nullptr;
            ListNode *current = head;

            for (int i = 1; i < n && current != nullptr; ++i)
            {
                prev = current;
                current = current->next;
            }

            if (current != nullptr)
            {
                prev->next = current->next;
                delete current;
            }

            return head;
        }

    ListNode* deleteMiddle(ListNode *head)
    {
        ListNode *test = head;
        int count = 0;
        while (test != nullptr)
        {
            ++count;
            test = test->next;
        }
        return removeNth(head, count / 2 + 1);
    }
};