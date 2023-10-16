//C program to show the traversal of an array

#include<stdio.h>

int main() {
    int A[100],size,i;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    printf("\nElements of the array are : \n");
    for(i=0;i<size;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}
