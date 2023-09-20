/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        void reorderList(ListNode *head)
        {
            if (head == nullptr or head->next == nullptr) return;
            ListNode *temp = head;
            vector<int> ans, ans2;
            while (temp != nullptr)
            {
                ans.push_back(temp->val);
                temp = temp->next;
            }

            int i = 0, j = ans.size() - 1;

            while (i <= j)
            {
                ans2.push_back(ans[i]);
                if (i != j)	// Avoid duplicating the middle element
                    ans2.push_back(ans[j]);
                i++;
                j--;
            }

            ListNode *newHead = new ListNode(ans2[0]);
            temp = newHead;
            for (int i = 1; i < ans2.size(); i++)
            {
                temp->next = new ListNode(ans2[i]);
                temp = temp->next;
            }

            head->val = newHead->val;
            head->next = newHead->next;
        }
};