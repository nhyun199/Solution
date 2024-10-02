#include <stdio.h>

int fibonachi(int n)
{
	int fibo;

	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else
	{
		fibo = fibonachi(n - 1) + fibonachi(n - 2);
		return fibo;
	}
}

int main()
{
    int n;
    scanf("%d", &n);
    int fibo = fibonachi(n);
    printf("%d", fibo);
}