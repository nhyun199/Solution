#include <stdio.h>

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int refund = (a*5) + (b*5) + (c*5) + (d*5) + (e*5) + (f*5);
    printf("%d", refund);
}