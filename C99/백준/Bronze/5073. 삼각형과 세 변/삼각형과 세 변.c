#include <stdio.h>

int main()
{
    int a, b, c;
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        
        if(a == 0 && b == 0 && c == 0)
            break;
        
        int max = a;
        if(b > max) 
            max = b;
        if(c > max) 
            max = c;
        
        if(a + b <= c || a + c <= b || b + c <= a)
        {
            printf("Invalid\n");
            continue;
        }
        
        if(a == b && b == c)
            printf("Equilateral\n");        
        else if(a == b || b == c || a == c)      
            printf("Isosceles\n");           
        else        
            printf("Scalene\n");        
    }
}