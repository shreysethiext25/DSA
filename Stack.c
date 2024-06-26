#include <stdio.h>
#include <stdlib.h>

struct stack {
    int top;
    int size;
    int *arr;
};

void create(struct stack *s) {
    printf("Enter Size: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));
}

void display(struct stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    int i;
    for (i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

void push(struct stack *s, int data) {
    if (s->top == s->size - 1) {
        printf("Stack Overflow\n");
    } else {
        s->top++;
        s->arr[s->top] = data;
    }
}

void pop(struct stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
    } else {
        int x = s->arr[s->top];
        s->top--;
        printf("Popped: %d\n", x);
    }
}

void peek(struct stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", s->arr[s->top]);
    }
}

int main(void) {
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    create(s);
    push(s, 10);
    push(s, 20);
    push(s, 30);
    display(s);
    pop(s);
    peek(s);
    free(s->arr); // Free allocated memory for stack array
    free(s); // Free allocated memory for stack struct
    return 0;
}
