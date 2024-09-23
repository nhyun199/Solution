#include <stdio.h>
#include <math.h>

int main()
{
    int w, h;
    scanf("%d %d", &w, &h);
    double cross = sqrt(w*w + h*h);
    int line = w + h;
    printf("%lf", line - cross);
}