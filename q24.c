#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    
    top++;
    stack[top] = value;
    printf("%d pushed to stack.\n", value);
}

void pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return;
    }
    
    int value = stack[top];
    top--;
    printf("%d popped from stack.\n", value);
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    
    printf("Stack elements are:");
    for (int i = top; i >= 0; i--) {
        printf(" %d", stack[i]);
    }
    printf("\n");
}

int main() {
    int ch,a;
    while(1) {
    printf("1.PUSH\n");
    printf("2.POP\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch) {
        case 1 : printf("Enter the number to be pushed : ");
                 scanf("%d",&a);
                 push(a);
                 break;
        case 2 : pop();
                 break;
        case 3 : display();
                 break;
        case 4 : return 0;
        default : printf("Wrong input ");
    }
    }
}
