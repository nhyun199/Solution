#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[4], B[4];
    scanf("%s %s", A, B);
    
    char tmpA = A[0], tmpB = B[0];
    A[0] = A[2];
    B[0] = B[2];
    A[2] = tmpA;
    B[2] = tmpB;
    
    int a = atoi(A);
    int b = atoi(B);
    
    printf("%d", a > b ? a : b);
}