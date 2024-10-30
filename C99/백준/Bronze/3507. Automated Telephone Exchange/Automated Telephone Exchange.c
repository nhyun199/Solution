#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    
    for(int i = 0; i <= 99; i++)
    {
        for(int j = 0; j <= 99; j++)
        {
            if(n - i - j == 0)
                count++;
        }
    }
    printf("%d", count);
}