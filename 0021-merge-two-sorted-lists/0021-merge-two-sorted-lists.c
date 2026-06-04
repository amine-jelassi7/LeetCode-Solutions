/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }

    int arr1[50];
    int arr2[50];
    struct ListNode* ptr = list1;
    struct ListNode* ptr2 = list2;
    struct ListNode* head = list1;
    int i = 0, j = 0;
    while (ptr != NULL) {
        arr1[i] = ptr->val;
        ptr = ptr->next;
        i++;
    }
    while (ptr2 != NULL) {
        arr2[j] = ptr2->val;
        ptr2 = ptr2->next;
        j++;
    }
    int* B = (int*)malloc((i + j) * sizeof(int));
    int i1 = 0;
    int j1 = 0;
    int k = 0;
    while (i1 < i && j1 < j) {
        if (arr1[i1] > arr2[j1]) {
            B[k] = arr2[j1];
            j1++;
            k++;
        } else if (arr1[i1] <= arr2[j1]) {
            B[k] = arr1[i1];
            i1++;
            k++;
        }
    }
    while (i1 < i) {
        B[k] = arr1[i1];
        i1++;
        k++;
    }
    while (j1 < j) {
        B[k] = arr2[j1];
        j1++;
        k++;
    }
    ptr = list1;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = list2;
    ptr = list1;
    i = 0;
    while (ptr != NULL) {
        ptr->val = B[i];
        ptr = ptr->next;
        i++;
    }
    free(B);
    return head;
}