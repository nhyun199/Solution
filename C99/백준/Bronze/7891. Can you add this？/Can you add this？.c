#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        printf("%lld\n", x+y);
    }
    return 0;
}