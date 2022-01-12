//STACKS USING ARRAY IMPLEMENTATION

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top=-1;

void main()
{
    int value, choice;
    while(1)
    {
        printf("1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1: printf("Enter value to be inserted: ");
                    scanf("%d", &value);
                    push(value);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("\n Invalid Choice");
        }
    }
}

void push(int value) {
    if(top == SIZE -1)
        printf("\nStack Overflow");
    else {
        top++;
        stack[top] = value;
        printf("Insertion successful");
    }
}

void pop() {
    if(top == -1)
        printf("Stack Empty");
    else {
        printf("Deleted: %d", stack[top]);
        top--;
    }
}

void display() {
    if(top == -1)
        printf("Stack is empty");
    else {
        int i;
        printf("STACK: ");
        for(i=top; i>=0; i--)
        printf("%d \n");
    }
}
