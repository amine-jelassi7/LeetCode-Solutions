/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode * fast  = head;
    struct ListNode * slow = head;
    while(fast!=NULL  && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (slow==fast) return true;
    }

    return false;
}