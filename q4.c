//C program to show the use of strcat() function

#include<stdio.h>
#include<string.h>

int main() {
    char A[30] = "This is ",B[30] = "Aditya";
    strcat(A,B);
    puts(A);
}