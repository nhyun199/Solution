#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int N, T;
    int total = 0;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &T);
        total += T;
        if(i != N-1)
            total += 8;
    }
    
    printf("%d %d", total/24, total%24);
}