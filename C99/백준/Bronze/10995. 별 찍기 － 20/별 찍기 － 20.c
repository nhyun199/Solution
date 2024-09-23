#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < N; j++)
                printf("* ");
            printf("\n");
        }
        else
        {
            printf(" ");
            for(int k = 0; k < N; k++)
                printf("* ");
            printf("\n");
        }
    }
}