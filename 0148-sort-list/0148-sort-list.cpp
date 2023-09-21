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
        ListNode* vectorToLinkedList(const vector<int> &vec)
        {
            ListNode *head = nullptr;
            ListNode *current = nullptr;

            for (int val: vec)
            {
                if (!head)
                {
                    head = new ListNode(val);
                    current = head;
                }
                else
                {
                    current->next = new ListNode(val);
                    current = current->next;
                }
            }

            return head;
        }
    ListNode* sortList(ListNode *head)
    {
        if (head == nullptr) return head;
        vector<int> ans;
        ListNode *temp = head;

        while (temp != nullptr)
        {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        sort(ans.begin(), ans.end());

        return vectorToLinkedList(ans);
    }
};