/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* Insert(struct ListNode* node,int x){
    struct ListNode* last=node;
    struct ListNode* addnode=(struct ListNode*)malloc(sizeof(struct ListNode));
    addnode->val=x;
    addnode->next=NULL;
    if (node == NULL) {
        return addnode;
    }
    while(last->next != NULL){
        last=last->next;
    }
    
    last->next=addnode;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* sums=NULL;
    struct ListNode* p1=l1;
    struct ListNode* p2=l2;
    int carry=0;
    
    while(p1!=NULL || p2!=NULL || carry!=0){
        int sum=carry;
        if (p1 != NULL) {
            sum += p1->val;
            p1 = p1->next;
        }
        
        if (p2 != NULL) {
            sum += p2->val;
            p2 = p2->next;
        }
        
        carry = sum / 10;
        sum = sum % 10;
        
        sums = Insert(sums, sum);
    }
return sums;
}
