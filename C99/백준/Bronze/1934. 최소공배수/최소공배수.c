#include <stdio.h>

int GCD(int A, int B)
{
    while(B != 0)
    {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int main()
{
    int T;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", (A*B)/GCD(A,B));
    }
}