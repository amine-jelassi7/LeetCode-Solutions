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
private:
    int get_length(ListNode* head)
    {
        int len = 0;
        ListNode* cur = head;
        while(cur)
        {
            len++;
            cur = cur->next;
        }
        return len;

    }
public:
    int getDecimalValue(ListNode* head) {
        ListNode* cur = head;
        int res = 0;
        int weight = get_length(head)-1;
        while(cur)
        {
            res += (cur->val *pow(2,weight--));
            cur = cur->next;
        }

        return res;
    }
};