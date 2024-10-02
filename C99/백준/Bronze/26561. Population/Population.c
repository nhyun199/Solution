#include <stdio.h>

int main()
{
    int n;
	int p, t;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &p, &t);
		p -= t / 7;
		p += t / 4;
		printf("%d\n", p);
	}
}