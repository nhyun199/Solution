#include <stdio.h>

int main()
{
    // 1 ~ 1000
    int X[1001] = { 0 };
    int Y[1001] = { 0 };
    int maxX = 0;
    int maxY = 0;
    for(int i = 0; i < 3; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        X[x]++;
        Y[y]++;
        if(maxX < x)
            maxX = x;
        
        if(maxY < y)
            maxY = y;
    }
    
    for(int i = 1; i <= maxX; i++)
    {
        if(X[i] == 1)
            printf("%d ", i);
    }
    for(int i = 1; i <= maxY; i++)
    {
        if(Y[i] == 1)
            printf("%d", i);
    }
    
}