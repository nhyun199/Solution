#include <stdio.h>
#include <stdlib.h>

int calculate(int a, char op, int b)
{
    if(op == '+') 
        return a+b;
    if(op == '-') 
        return a-b;
    if(op == '*') 
        return a*b;
    if(op == '/')
    {
        int result = abs(a) / abs(b);
        if((a<0 && b>0) || (a>0 && b<0))
        {
            result = -result;
        }
        return result;
    }

    return 0;
}

int main()
{
    int k1, k2, k3;
    char o1, o2;
    scanf("%d %c %d %c %d", &k1, &o1, &k2, &o2, &k3);
    
    int result1 = calculate(calculate(k1, o1, k2), o2, k3);
    
    int result2 = calculate(k1, o1, calculate(k2, o2, k3));

    if(result1 <= result2)
        printf("%d\n%d\n", result1, result2);
    else
        printf("%d\n%d\n", result2, result1);
    
}