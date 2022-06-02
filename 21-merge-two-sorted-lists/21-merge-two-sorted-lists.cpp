class Solution
{
    public:
        ListNode* mergeTwoLists(ListNode *head1, ListNode *head2)
        {
            if (head1 == nullptr)
            {
                return head2;
            }
            else if (head2 == nullptr)
            {
                return head1;
            }

            ListNode *finalHead = nullptr;
            ListNode *finalTail = nullptr;

            if (head1->val < head2->val)
            {
                finalHead = head1;
                finalTail = head1;
                head1 = head1->next;
            }
            else
            {
                finalHead = head2;
                finalTail = head2;
                head2 = head2->next;
            }

            while (head1 != nullptr and head2 != nullptr)
            {
                if (head1->val < head2->val)
                {
                    finalTail->next = head1;
                    finalTail = head1;
                    head1 = head1->next;
                }
                else
                {
                    finalTail->next = head2;
                    finalTail = head2;
                    head2 = head2->next;
                }
            }

            if (head1 != nullptr)
            {
                finalTail->next = head1;
            }
            if (head2 != nullptr)
            {
                finalTail->next = head2;
            }
            return finalHead;
        }
};