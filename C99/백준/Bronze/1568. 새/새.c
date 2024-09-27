#include <stdio.h>

int main()
{
    int N;
	scanf("%d", &N);

	int time = 0;
	int fly = 1;

	while (N != 0)
	{
		if (N < fly)
			fly = 1;

		N -= fly++;
		time++;
	}

	printf("%d", time);
}