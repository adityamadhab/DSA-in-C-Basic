//C program to show the use of realloc() function

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    int n,i;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL) {
        printf("Memory is not allocated");
    }
    else {
        printf("Memory sucessfully allocated using malloc\n");
        for(i=0;i<n;i++) {
            ptr[i] = i++;
        }
        printf("The elements of the array are : ");
        for(i=0;i<n;i++) {
            printf("%d\n",ptr[i]);
        }
        printf("Enter the new value : ");
        scanf("%d",&n);
        ptr = realloc(ptr,n*sizeof(int));
        printf("Memory sucessfully reallocated\n");
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