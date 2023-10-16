//C program to show the use of * and & function

#include<stdio.h>

int main() {
    int a=5,*b;
    b=&a;
    printf("%d\n",a);
    printf("%d\n",*(&a));
    printf("%d\n",*b);
    printf("%d\n",b);
    printf("%d\n",&b);
    return 0;
}
