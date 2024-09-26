#include <stdio.h>

int main()
{
    int N, m, M, T, R;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    int runningTime = 0;
    int totalTime = 0;
    int prePulse = m;
    
    if(m + T > M)
    {
        printf("-1");
        return 0;
    }
    
    while(runningTime < N)
    {
        if(prePulse + T <= M)
        {
            prePulse += T;
            runningTime++;
            totalTime++;
        }
        else
        {
            prePulse -= R;
            if(prePulse < m)
               prePulse = m;
            totalTime++;
        }
        
        if(prePulse == m && prePulse + T > M)
        {
            printf("-1");
            return 0;
        }
    }
    printf("%d", totalTime);
    return 0;    
}