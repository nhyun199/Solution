#include <stdio.h>

int main()
{
    int total;
    scanf("%d", &total);
    int sum = 0;
    for(int i = 0; i < 9; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", total-sum);
}