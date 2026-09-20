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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        
        while (prev->next) {
            if (prev->next->val == val) {
                ListNode* toDelete = prev->next;
                prev->next = prev->next->next;
            } else {
                prev = prev->next;
            }
        }
        
        return dummy.next;
    }
};