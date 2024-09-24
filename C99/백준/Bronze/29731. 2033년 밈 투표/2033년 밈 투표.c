#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    int haking;
    scanf("%d", &N);
    getchar();
    
    for(int i = 0; i < N; i++)
    {
        char S[51];
        scanf("%[^\n]", S);
        getchar();
        
        if(strcmp(S, "Never gonna give you up") == 0) {}
        else if(strcmp(S, "Never gonna let you down") == 0) {}
        else if(strcmp(S, "Never gonna run around and desert you") == 0) {}
        else if(strcmp(S, "Never gonna make you cry") == 0) {}
        else if(strcmp(S, "Never gonna say goodbye") == 0) {}
        else if(strcmp(S, "Never gonna tell a lie and hurt you") == 0) {}
        else if(strcmp(S, "Never gonna stop") == 0) {}
        else
            haking++;
    }
    if(haking == 0)
        printf("No");
    else
        printf("Yes");
}