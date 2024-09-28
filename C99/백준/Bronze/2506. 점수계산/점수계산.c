#include <stdio.h>

int main()
{
    int N;
    int n;
    int bonus = 0;
    int result = 0;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &n);
        if(n == 1)
        {
            result += 1 + bonus;
            bonus++;
        }
        else
        {
            bonus = 0;
        }
    }
    printf("%d", result);
}