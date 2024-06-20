/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int len(struct ListNode* head){
    struct ListNode* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
 }

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int length = len(head);
    int m=length - n;
    struct ListNode* ptr=head;
    if (m == 0) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    for(int i=1;i<m;i++){
        ptr=ptr->next;
    }
    struct ListNode* temp=ptr->next;
    ptr->next=ptr->next->next;
    free(temp);
    return head;
}
