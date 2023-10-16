//C program to show array deletion

#include<stdio.h>

int main() {
    int A[100],size,i,x;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be deleted : ");
    scanf("%d",&x);
    while(x<size) {
        A[x-1] = A[x];
        x++;
    }
    printf("\nArray after deletion : \n");
    for(i=0;i<size-1;i++) {
        printf("%d\n",A[i]);
    }
    return 0;
}