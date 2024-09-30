#include <stdio.h>

int main()
{
    long long A, B;
	scanf("%lld %lld", &A, &B);
	long long sum;
    
    if(A >= B)
        sum = A * (A + 1) / 2 - (B - 1) * B / 2;
    else
        sum = B * (B + 1) / 2 - (A - 1) * A / 2;
    
	printf("%lld", sum);

	return 0;
}