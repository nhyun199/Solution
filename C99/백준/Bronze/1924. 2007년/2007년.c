#include <stdio.h>

int main()
{
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mon, day;
    int result = 0;
    scanf("%d %d", &mon, &day);
    
    for(int i = 0; i < mon; i++)
        result += month[i];
    result = (result + day) % 7;
    
    switch(result)
    {
        case 0:
            printf("SUN");
            break;
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
    }
}