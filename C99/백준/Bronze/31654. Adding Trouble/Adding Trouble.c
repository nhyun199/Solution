#include <stdio.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    
    if(a + b == c)
        printf("correct!");
    else
        printf("wrong!");
}