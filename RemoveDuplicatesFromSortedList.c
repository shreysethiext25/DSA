/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp=head;
    if(head==NULL){
        return NULL;
    }
    
    while(temp->next!=NULL){
        struct ListNode* local;
        local=temp->next;
        if(temp->val==local->val){
            temp->next=local->next;
        }
        else{
            temp=temp->next;
        }

        
    }
    return head;
}
