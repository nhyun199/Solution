#include <stdio.h>

int main()
{
    int T;
    int k;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &k);
        printf("%d\n", 23 * k);
    }
}