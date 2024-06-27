/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    struct ListNode* newhead=head->next;
    struct ListNode* prev=NULL;
    struct ListNode* current;

    current = head;

    while (current != NULL && current->next != NULL)
    {
        struct ListNode* nextpair = current->next->next;
        struct ListNode* second = current->next;

        second->next = current;
        current->next = nextpair;
        if (prev != NULL)
        {
            prev->next = second;
        }
        prev = current;

        current = nextpair;
    }

    return newhead;
}
