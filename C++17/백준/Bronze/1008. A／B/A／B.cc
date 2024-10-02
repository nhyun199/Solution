#include <cstdio>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (double)a / (double)b;
    printf("%.12f", c);
    return 0;
}