//QUEUE IMPLEMENTATION USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head;

void enqueue() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL) {
        printf("Queue Full");
    }
    else {
        printf("Enter value to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL) {
            ptr->next = NULL;
            head = ptr;
            printf("Node inserted");
        }
        else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node inserted");
        }
    }
        
}

void dequeue() {
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
        printf("Queue empty");
    }
    else {
        printf("Queue: \n");
        while(ptr != NULL) {
            printf("%d \n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main() {
    int choice;
    while(1) {
        printf("Queue Operations\n");
        printf("1.Push \n2.Pop \n3.Display \n4.Exit \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: exit(1);
                break;
            default: printf("Invalid Choice");
        }
    }
}




