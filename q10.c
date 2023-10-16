//C program to find the factorial of a number using recursion

#include<stdio.h>

int Fact(int n) {
    if((n==0) || (n==1)) {
        return 1;
    }
    else {
        return(n*Fact(n-1));
    }
}


int main() {
    int n,fact;
    printf("Enter the number : ");
    scanf("%d",&n);
    fact = Fact(n);
    printf("The required factorial is : %d",fact);
    return 0;
}
