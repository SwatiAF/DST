//CIRCULAR QUEUE OPERATIONS

#include<stdio.h>
#include<conio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

int isFull() {
  if((front == rear + 1) || (front == 0 && rear ==SIZE - 1))
    return 1;
  else 
    return 0;
}

int isEmpty() {
  if(front == -1) 
    return 1;
  else 
    return 0;
}

void enQueue(int element) {
  if(isFull())
    printf("QUEUE OVERFLOW \n");
  else {
    if(front == -1)
      front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = element;
    printf("Inserted Element: %d \n", element);
  }
}

int deQueue() {
  int element;
  if(isEmpty()) {
    printf("QUEUE EMPTY \n");
    return (-1);
  }
  else {
    element = items[front];
    if(front == rear) {
      front = -1;
      rear = -1;
    }
    else {
      front = (front + 1) % SIZE;
    }
    printf("Deleted Element: %d \n", element);
    return (element);
  }
}

void display() {
  int i;
  if(isEmpty()) 
    printf("QUEUE EMPTY \n");
  else {
    printf("Front = %d", front);
    printf("QUEUE ITEMS: ");
    for(i = 0; i != rear; i = (i + 1) % SIZE) {
      printf("%d \t", items[i]);
    }
    printf("%d \n", items[i]);
    printf("Rear = %d \n", rear);
  }
}

void main() {
  int choice;
  while(1) {
    printf("QUEUE OPERATIONS \n");
    printf("1.ENQUEUE \t 2.DEQUEUE \t 3.DISPLAY \t 4.EXIT \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
      case 1: enQueue();
        break;
      case 2: deQueue();
        breal;
      case 3: display();
        break;
      case 4: exit(1);
        break;
      default: printf("INVALID CHOICE!");
    }
  }
}
        
