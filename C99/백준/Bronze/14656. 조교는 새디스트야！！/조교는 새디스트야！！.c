#include <stdio.h>

int main()
{
    int N;
    int count = 1;
    int hit = 0;
    int num;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if(num != count)
            hit++;
        
        count++;
    }
    printf("%d", hit);
}