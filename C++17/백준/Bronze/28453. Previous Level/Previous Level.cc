#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        int level;
        scanf("%d", &level);
        if(level == 300)
            printf("1 ");
        else if(level >= 275)
            printf("2 ");
        else if(level >= 250)
            printf("3 ");
        else
            printf("4 ");
    }
}