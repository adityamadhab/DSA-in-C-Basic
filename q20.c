//C program to selection sort

#include<stdio.h>

int main() {
    int A[100],size,i,j,temp,min;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    for(i=0;i<size;i++) {
        min=i;
        for(j=i+1;j<size;j++) {
            if(A[j]<A[min]) {
                min=j;
            }
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    printf("Sorted elements are : ");
    for(i=0;i<size;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}