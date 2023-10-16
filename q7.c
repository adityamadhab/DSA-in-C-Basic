//C program to show the use of calloc() function

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    if(ptr == NULL) {
        printf("Memory is not allocated");
    }
    else {
        printf("Memory sucessfully allocated using calloc\n");
        for(i=0;i<n;i++) {
            ptr[i] = i++;
        }
        printf("The elements of the array are : ");
        for(i=0;i<n;i++) {
            printf("%d\n",ptr[i]);
        }
    }
    return 0;
}