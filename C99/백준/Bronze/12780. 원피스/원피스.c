#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char H[100001];
    char N[11];
    scanf("%s %s", H, N);
    
    int count = 0;
    char *find = strstr(H, N);
    
    while(find != NULL)
    {
        count++;
        find = strstr(find+1, N);
    }
    printf("%d", count);
}