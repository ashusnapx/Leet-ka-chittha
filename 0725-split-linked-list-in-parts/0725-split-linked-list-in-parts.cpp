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
        vector<ListNode*> splitListToParts(ListNode *head, int k)
        {
            vector<ListNode*> ans(k, nullptr);	// Initialize result vector with k nullptrs
            int count = 0;
            ListNode *current = head;

            while (current)
            {
                count++;
                current = current->next;
            }

            int minSize = count / k;	// Minimum number of nodes per part
            int extraNodes = count % k;	// Number of parts that will have one extra node

            current = head;
            ListNode *prev = nullptr;

            for (int i = 0; i < k && current; i++)
            {
                ans[i] = current;	// Set the current part's head

                int partSize = minSize + (extraNodes-- > 0 ? 1 : 0);	// Calculate size of this part

                for (int j = 0; j < partSize; j++)
                {
                    prev = current;
                    current = current->next;
                }

                if (prev)
                {
                    prev->next = nullptr;	// Disconnect the current part from the rest of the list
                }
            }

            return ans;
        }
};