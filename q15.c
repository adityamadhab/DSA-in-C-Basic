//C program to show linear search of an array

#include<stdio.h>

int main() {
    int A[100],size,i,x,pos=0,count;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&x);
    for(i=0;i<size;i++) {
        if(x == A[i]) {
            pos=1;
            count = i+1;
            break;
        }
    }
    if(pos==1) {
        printf("Element found in %dth no. position",count);
    }
    else {
        printf("Elements not found");
    }
    return 0;
}