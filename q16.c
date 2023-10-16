//C program to show binary search

#include<stdio.h>

int main() {
    int A[100],size,i,x,low,high,mid,flag,count;
    printf("Enter the no. of elements : ");
    scanf("%d",&size);
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++) {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&x);
    low=0;
    high=size-1;
    while(low<=high) {
        mid=(low+high)/2;
        if(x==A[mid]) {
            flag=1;
            break;
        }
        else if(x<A[mid]) {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    if(flag==1) {
        printf("Element found");
    }
    else {
        printf("Elements not found");
    }
    return 0;
}