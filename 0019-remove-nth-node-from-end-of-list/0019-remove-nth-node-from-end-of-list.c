/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int sz = 0;
    struct ListNode * curr = head;
    while(curr)
    {
        sz++;
        curr = curr->next;
    }
    if(sz == n)
    {
        head=head->next;
    }
    else{
        curr = head;
        for(int i=1;i<sz-n;i++)
        {
            curr = curr->next;
        }
        curr->next = curr->next->next;
    }
    return head;
}