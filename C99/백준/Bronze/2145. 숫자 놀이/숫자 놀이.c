#include <stdio.h>

int digitsum(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    while(1)
    {
        int N;
        scanf("%d", &N);
        
        if(N == 0)
            return 0;
        
        int sum = 0;
        
        while(1)
        {
            if(digitsum(N) < 10)
            {
                sum = digitsum(N);
                break;
            }
            else
                N = digitsum(N);
        }
        printf("%d\n", sum);
    }
}