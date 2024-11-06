#include <stdio.h>

int main()
{
    int score[6];
    int sum, max, min;
    
    while(1)
    {
        sum = 0; max = -1; min = 11;
        
        for(int i = 0; i < 6; i++)
        {
            scanf("%d", &score[i]);
            sum += score[i];
            
            if(max < score[i])
                max = score[i];
            if(min > score[i])
                min = score[i];
        }
        
        if(sum == 0)
            return 0;
        
        sum -= (max + min);
        
        printf("%g\n", sum / 4.0);
    }
}