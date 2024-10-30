#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int totalScore = 0;
    int bonusScore = 0;
    scanf("%d", &N);
    char *result = (char*)malloc((N+1)*sizeof(char));
    scanf("%s", result);
    
    for(int i = 0; i < N; i++)
    {
        int baseScore = i+1;
        if(result[i] == 'O')
        {
            totalScore += baseScore + bonusScore;
            bonusScore++;
        }
        else
        {
            bonusScore = 0;
        }
    }
    
    printf("%d", totalScore);
    free(result);
}