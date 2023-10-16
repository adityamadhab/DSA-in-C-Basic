//C program to show the use of strlen() function

#include<stdio.h>
#include<string.h>

int main() {
    char A[20] = "Aditya";
    char B[20] = "Program";
    printf("Length of string A : %d\n",strlen(A));
    printf("Length of string B : %d\n",strlen(B));
    return 0;
}