//C program to find the sum of two matrices

#include<stdio.h>

int main() {
    int A[100][100],B[100][100],SUM[100][100],i,j,r,c;
    printf("Enter the no. rows : ");
    scanf("%d",&r);
    printf("Enter the no. columns : ");
    scanf("%d",&c);
    printf("Enter the elements of the first matrix : ");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of the second matrix : ");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<r;i++) {
        for (j=0;j<r;j++) {
            SUM[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nThe resultant array is : \n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ",SUM[i][j]);
        }
        printf("\n");
    }
    return 0;
}