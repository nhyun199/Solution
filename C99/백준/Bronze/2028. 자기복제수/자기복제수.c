#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++)
    {
        int p;
        scanf("%d", &p);
        int P = p*p;
        char origin[10];
        char copy[20];
        sprintf(origin, "%d", p);
        sprintf(copy, "%d", P);
        int len_origin = strlen(origin);
        int len_copy = strlen(copy);
        
        if(strcmp(origin, &copy[len_copy - len_origin]) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}