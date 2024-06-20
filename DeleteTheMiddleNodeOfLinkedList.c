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
struct ListNode* deleteMiddle(struct ListNode* head) {
    int length = len(head);
    if(length==1 || length==0){ return NULL;}
    int middle;
    if(length%2==0){ middle=length/2 + 1;}
    else{middle=(length+1)/2;}
    struct ListNode* temp=head;
    for(int i=1;i<middle-1;i++){
        temp=temp->next;
    }
    struct ListNode* nex=temp->next;
    temp->next=nex->next;
    free(nex);
    return(head);
}
