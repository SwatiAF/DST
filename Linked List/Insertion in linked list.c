//Insertion in a Linked List

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head;

void insertAtStart() {
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL) {
        printf("Stack overflow\n");
    }
    else {
        printf("Enter value to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("Node inserted\n");
    }
}

void insertAtEnd() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL) {
        printf("Queue Full\n");
    }
    else {
        printf("Enter value to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL) {
            ptr->next = NULL;
            head = ptr;
            printf("Node inserted\n");
        }
        else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Node inserted\n");
        }
    }
}

void randomInsert() {
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Overflow\n");
    }
    else {
        printf("Enter value to be inserted: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("Enter Location after which value is to be inserted: ");
        scanf("%d", &loc);
        temp = head;
        for(i = 0; i < loc; i++) {
            temp = temp->next;
            if(temp == NULL) {
                printf("Value cannot be inserted here\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Node inserted\n");
    }
}

void display() {
    struct node *ptr;
    ptr = head;
    if(head == NULL) {
        printf("List empty\n");
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
        printf("Insertion Operations: \n");
        printf("1.Insert at beginning\n 2.Insert at random location\n 3.Insert at end\n 4.Display\n 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: insertAtStart();
                break;
            case 2: randomInsert();
                break;
            case 3: insertAtEnd();
                break;
            case 4: display();
                break;
            case 5: exit(1);
                break;
            default: printf("Invalid Choice");
        }
    }
}

Output: 
Insertion Operations: 
1.Insert at beginning
 2.Insert at random location
 3.Insert at end
 4.Display
 5.Exit
Enter choice: 1
Enter value to be inserted: 1
Node inserted
Insertion Operations: 
1.Insert at beginning
 2.Insert at random location
 3.Insert at end
 4.Display
 5.Exit
Enter choice: 2
Enter value to be inserted: 2
Enter Location after which value is to be inserted: 2
Value cannot be inserted here
Insertion Operations: 
1.Insert at beginning
 2.Insert at random location
 3.Insert at end
 4.Display
 5.Exit
Enter choice: 
3
Enter value to be inserted: 2
Node inserted
Insertion Operations: 
1.Insert at beginning
 2.Insert at random location
 3.Insert at end
 4.Display
 5.Exit
Enter choice: 3
Enter value to be inserted: 3
Node inserted
Insertion Operations: 
1.Insert at beginning
 2.Insert at random location
 3.Insert at end
 4.Display
 5.Exit
Enter choice: 
4
List: 
1 
2 
3 
Insertion Operations: 
1.Insert at beginning
 2.Insert at random location
 3.Insert at end
 4.Display
 5.Exit
Enter choice: 
















