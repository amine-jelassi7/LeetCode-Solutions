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
    ListNode* reverse(ListNode*head)
    {
        ListNode* cur = head;
        ListNode* prev = NULL;
        ListNode* next;
        while(cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
public:

    bool isPalindrome(ListNode* head)
{
    if (!head) return true;

    ListNode* copy = NULL;
    ListNode* tail = NULL;

    ListNode* cur = head;

    while (cur)
    {
        ListNode* node = new ListNode(cur->val);

        if (!copy)
            copy = tail = node;
        else
        {
            tail->next = node;
            tail = node;
        }

        cur = cur->next;
    }

    ListNode* rev = reverse(copy);

    cur = head;

    while (cur)
    {
        if (cur->val != rev->val)
            return false;

        cur = cur->next;
        rev = rev->next;
    }

    return true;

    }
};