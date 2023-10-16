//C program to show the use of free() function

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr1,*ptr2;
    int n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    ptr2 = (int*)malloc(n*sizeof(int));
    ptr1 = (int*)calloc(n,sizeof(int));
    if((ptr1 == NULL) ||  (ptr2 == NULL)) {
        printf("Memory is not allocated");
    }
    else {
        printf("Memory sucessfully allocated using malloc\n");
        free(ptr1);
        printf("Malloc memory freed\n");
        printf("Memory sucessfully allocated using calloc\n");
        free(ptr2);
        printf("Calloc memory freed");
        
    }
    return 0;
}