#include <stdio.h>

long long AtSign(long long A, long long B)
{
    long long result;
    result = (A + B) * (A - B);
    return result;
}

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf("%lld", AtSign(A,B));    
}