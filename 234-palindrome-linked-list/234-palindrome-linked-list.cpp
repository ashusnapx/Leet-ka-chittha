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
        bool isPalindrome(ListNode *head)
        {
            ListNode *temp = head;
            int count = 0;
            while (temp != nullptr)
            {
                temp = temp->next;
                count++;
            }
            int arr[count];
            ListNode *temp2 = head;
            for (int i = 0; i < count; i++)
            {
                arr[i] = temp2->val;
                temp2 = temp2->next;
            }

            int i = 0;
            int j = count - 1;
            while (i <= j)
            {
                if (arr[i] != arr[j])
                {
                    return false;
                }
                i++;
                j--;
            }

            return true;
        }
};