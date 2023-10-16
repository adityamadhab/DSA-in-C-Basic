//C program to show bubble sort

#include<stdio.h>

int main() {
    int A[100],size,i,j,temp;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    for(i=1;i<size;i++) {
        for(j=0;j<size-i;j++) {
            if(A[j]>A[j+1]) {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    printf("Sorted elements are : ");
    for(i=0;i<size;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}