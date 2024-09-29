#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar();
    
    for(int i = 0; i < N; i++)
    {
        char S[31];
        scanf("%30[^\n]", S);
        getchar();
        
        if(S[0] >= 97)
           S[0] -= 32;
        
        printf("%s\n", S);
    }
}