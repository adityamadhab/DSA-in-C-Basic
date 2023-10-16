//C program to insertion sort

#include<stdio.h>

int main() {
    int A[100],size,i,j,temp,min;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    for(i=1;i<size;i++) {
        temp=A[i];
        j=i-1;
        while(j>=0 && A[j] > temp) {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
    printf("Sorted elements are : ");
    for(i=0;i<size;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}