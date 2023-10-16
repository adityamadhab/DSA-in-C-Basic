//C program to solve tower of hanoi problem

#include<stdio.h>

void tower(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    tower(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    tower(n-1, aux_rod, to_rod, from_rod);
}

int main() {
    int num;
    printf("Enter the no. of disks : ");
    scanf("%d",&num);
    printf("Enter the squences of the moves involved in the tower of hanoi : ");
    tower(num,'A','B','C');
    return 0;
}

