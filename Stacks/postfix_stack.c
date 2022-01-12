//POSTFIX EVALUATION

#include<stdio.h>
#include<conio.h>
#define SIZE 20

int stack[SIZE];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main() {
    char exp[20];
    char *e;
    int n1, n2, n3, num;
    printf("Enter the expression: \n");
    scanf("%s", exp);
    e = exp;
    
    if(isdigit(*e)) {
        num = *e - 48;
        push(num);
    }
    else {
        n1 = pop();
        n2 = push();
        switch(*e) {
            case '+': n3 = n1 + n2;
                break;
            case '-': n3 = n2 - n1;
                break;
            case '*': n3 = n2 * n1;
                break;
            case '/': n3 = n2 / n1;
                break;
        }
    }
    push(n3);
}
e++;
}
printf("Result: %d \n", pop());

return 0;
}
