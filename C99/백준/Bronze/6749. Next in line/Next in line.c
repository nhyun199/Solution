#include <stdio.h>

int main()
{
    int Y, M;
    scanf("%d %d", &Y, &M);
    int diff = M - Y;
    printf("%d", M + diff);
}