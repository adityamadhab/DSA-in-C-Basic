//C program to show array insertion

#include<stdio.h>

int main() {
    int A[100],size,i,x,pos;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter the new element : ");
    scanf("%d",&x);
    printf("Enter the position to be entered : ");
    scanf("%d",&pos);
    for(i=size-1;i>=pos;i--) {
        A[i] = A[i-1];
    }
    A[pos-1] = x;
    size++;
    printf("\nArray after insertion : \n");
    for(i=0;i<size;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}