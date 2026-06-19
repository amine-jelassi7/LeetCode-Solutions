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
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head ==NULL || head->next == NULL || k==0) return head;
        int n = 1;
        ListNode* tail = head;
        while(tail->next)
        {
            tail = tail->next;
            n++;
        }

        k = k%n;
        if (k==0) return head;

        tail->next =head;
        int step = n-k;
        ListNode* new_tail =head;
        while(--step)
        {
            new_tail =  new_tail->next;
        }

        ListNode* new_head = new_tail->next;
        new_tail->next = NULL;

        return new_head;
        
    }
};