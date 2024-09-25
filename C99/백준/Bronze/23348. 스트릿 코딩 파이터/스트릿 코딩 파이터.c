#include <stdio.h>

int main()
{
    int A, B, C;
    int N;
    int a, b, c;
    int top = 0;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        int score = 0;
        for(int j = 0; j < 3; j++)
        {
            scanf("%d %d %d", &a, &b, &c);
            score += (A*a) + (B*b) + (C*c);  
        }
        
        if(score > top)
            top = score;
    }
    printf("%d", top);
}