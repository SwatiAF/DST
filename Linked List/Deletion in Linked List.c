//Deletion in a Linked List

#include<stdio.h>
#include<stdlib.h>
struct node {
     int data;
    struct node *next;
};
struct node *head;

 void deleteAtStart() {
        struct node *ptr;
        if(head == NULL) {
            printf("Stack empty\n");
        }
        else {
            ptr = head;
            head = ptr ->next;
            free(ptr);
            printf("Node deleted\n");
        }
    }
    
void deleteAtEnd() {
    struct node *ptr;
   if(head == NULL) {
       printf("Stack empty\n");
   }
   else {
       ptr = head;
       head = ptr ->next;
       free(ptr);
       printf("Node deleted\n");
   }
}

void deleteRandom() {
    struct node *ptr, *temp;
    int loc, i;
    printf("Enter the location to be added at: ");
    scanf("%d", &loc);
    ptr = head;
    for(i = 0; i < loc; i++) {
        temp = ptr;
        ptr = ptr->next;
        if(ptr == NULL) {
            printf("Cannot delete at this location\n");
            return;
        }
    }
    temp->next = ptr->next;
    free(ptr);
    printf("Deleted Node: %d\n", loc+1);
}

void display() {
    struct node *ptr;
    ptr = head;
    if(head == NULL) {
        printf("List empty");
    }
    else {
        printf("List: \n");
        while(ptr != NULL) {
            printf("%d \n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void main() {
    int choice;
    while(1) {
        printf("Deletion Operations: \n");
        printf("\n1.Delete at beginning\n 2.Delete at random location\n 3.Delete at end\n 4.Display\n 5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1: deleteAtStart();
                break;
            case 2: deleteRandom();
                break;
            case 3: deleteAtEnd();
                break;
            case 4: display();
                break;
            case 5: exit(1);
                break;
            default: printf("Invalid Choice");
        }
    }
}
