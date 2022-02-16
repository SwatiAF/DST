//STACK IMPLEMENTATION USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head;

void push() {
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL) {
        printf("Stack overflow");
    }
    else {
        printf("Enter value to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Node inserted");
    }
}

void pop() {
   struct node *ptr;
   if(head == NULL) {
       printf("Stack empty");
   }
   else {
       ptr = head;
       head = ptr ->next;
       free(ptr);
       printf("Node deleted");
   }
}
void display() {
    struct node *ptr;
    ptr = head;
    if(head == NULL) {
        printf("Stack empty");
    }
    else {
        printf("Stack: \n");
        while(ptr != NULL) {
            printf("%d \n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main() {
    int choice;
    while(1) {
        printf("Stack Operations\n");
        printf("1.Push \n2.Pop \n3.Display \n4.Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(1);
                break;
            default: printf("Invalid Choice");
        }
    }
}







