#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};
struct node *create(int *arr, int n) {
  struct node *head = (struct node *)malloc(sizeof(struct node));
  head->data = arr[0];
  struct node *temp = head;
  for (int i = 1; i < n; i++) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = arr[i];
    temp->next = newnode;
    temp = newnode;
  }
  return head;
}
void display(struct node *head) {
  struct node *temp = head;
  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("NULL");
}
int count(struct node *head) {
  struct node *temp = head;
  int count = 0;
  while (temp != NULL) {
    count++;
    temp = temp->next;
  }
  return count;
}
int sum(struct node *head) {
  struct node *temp = head;
  int sum = 0;
  while (temp != NULL) {
    sum += temp->data;
    temp = temp->next;
  }
  return sum;
}
int max(struct node *head) {
  int max = 0;
  struct node *temp = head;
  while (temp != NULL) {
    if (temp->data > max) {
      max = temp->data;
    }
    temp = temp->next;
  }
  return max;
}
struct node *searchelement(struct node *head, int element) {
  if (head == NULL) {
    return NULL;
  }
  if (head->data == element) {
    return head;
  }
  return searchelement(head->next, element);
}
void insertelementatstart(struct node *head, int pos, int element) {
    if(pos<0 || pos>count(head)){
        printf("Invalid position");
        return;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=element;
    if(pos==0){
        newnode->next=head;
    }
    else{
        struct node* temp=head;
        for(int i=0;i<pos;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
  
}

int main(void) {
  int arr[] = {5, 2, 7, 2, 3, 4};
  struct node *new = create(arr, 6);
  display(new);
  printf("\ncount:%d", count(new));
  printf("\nsum:%d", sum(new));
  printf("\nmax:%d", max(new));
  struct node *hello = searchelement(new, 8);
  if (hello) {
    printf("\nKey is found");
  } else {
    printf("\nKey is not found");
  }
  insertelementatstart(new,2, 9);
  printf("\n");
  display(new);
}
