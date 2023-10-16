//C program to find the multiplication of two matrices

#include<stdio.h>

int main() {
    int A[100][100],B[100][100],Multi[100][100],i,j,k,r1,c1,r2,c2;
    printf("Enter the no. rows of first matrix : ");
    scanf("%d",&r1);
    printf("Enter the no. columns of the first matrix : ");
    scanf("%d",&c1);
    printf("Enter the elements of the first matrix : ");
    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the no. rows of second matrix : ");
    scanf("%d",&r2);
    printf("Enter the no. columns of the second matrix : ");
    scanf("%d",&c2);
    printf("Enter the elements of the second matrix : ");
    for(i=0;i<r2;i++) {
        for(j=0;j<c2;j++) {
            scanf("%d",&B[i][j]);
        }
    }
    if(c1!=r2) {
        printf("Multiplication not possible");
    }
    else {
        for(i=0;i<r1;i++) {
            for(j=0;j<c2;j++) {
                for(k=0;k<c1;k++)
                Multi[i][j] += A[i][k] + B[k][j];
            }
        }
        printf("\nThe Resultant matrix is : \n");
        for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            printf("%d ",Multi[i][j]);
        }
        printf("\n");
        }
    }
    return 0;
}