#include <stdio.h>

int main()
{
    int N;
    int sum;
    int count = 0;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++)
    {
        sum = 0;
        int temp = i;
        while(temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        
        if(i % sum == 0)
            count++;
    }
    printf("%d", count);
}