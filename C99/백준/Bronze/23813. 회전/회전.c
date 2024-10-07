#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    long long sum = N;
    char roll[10];
    sprintf(roll, "%d", N);
    int len = strlen(roll);
    
    for(int i = 0; i < len-1; i++)
    {
        char temp = roll[len-1];
        for(int j = len-1; j>0; j--)
        {
            roll[j] = roll[j-1];
        }
        roll[0] = temp;
        int rollNum = atoi(roll);
        sum += rollNum;
    }
    printf("%lld", sum);
}
