//C program to show the use of strcpy() function

#include<stdio.h>
#include<string.h>

int main() {
    char A[20] = "String Copy";
    char B[20];
    strcpy(B,A);
    printf("The copied string is : ");
    puts(B);
    return 0;
}