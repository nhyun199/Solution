#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    double d, f, p;
    double result;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &d, &f, &p);
        result = d * f * p;
        printf("$%.2lf\n", result);
    }
}