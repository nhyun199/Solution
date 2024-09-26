#include <stdio.h>

int main()
{
    int N;
	int seat[100] = { 0 };
	int customer;
	int rejected = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &customer);

		if (seat[customer - 1] == 0)
			seat[customer - 1]++;
		else
			rejected++;
	}
	printf("%d", rejected);
}