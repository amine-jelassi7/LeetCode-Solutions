/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode* next;

    next = node->next;
    while (next)
    {
        node->val = next->val;
        if (!next->next)
            break ;
        node = next;
        next = node->next;
    }
    node->next = NULL;
}