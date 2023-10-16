//C program to show the use of strcmp() function

#include<stdio.h>
#include<string.h>

int main() {
    char A[30] = "this is ";
    char B[30] = "this is not";
    if(strcmp(A,B)==0) {
        printf("Strings are equal");
    }
    else {
        printf("Strings are not equal");
    }
    return 0;
}