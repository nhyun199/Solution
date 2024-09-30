#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int A = 0;
    int B = 0;
    for(int i = 0; i < N; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if(a > b)
            A++;
        else if(a < b)
            B++;
        else
            continue;
    }
    printf("%d %d", A, B); 
}