#include <stdio.h>

int main()
{
    int T;
    int A, B;
    int n;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        n = A / B;
        printf("%d\n", n*n);
    }
}