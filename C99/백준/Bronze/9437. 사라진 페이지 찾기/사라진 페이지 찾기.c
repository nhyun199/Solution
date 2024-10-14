#include <stdio.h>

int main()
{
    while (1)
{
	int N, P;
	int page[4] = { 0 };
	int result = scanf("%d", &N);

	if (result == 1 && N == 0)
		return 0;

	result = scanf("%d", &P);

	if (P > N / 2)
	{
		if (P % 2 != 0)
		{
			page[0] = N - P;
			page[1] = N - P + 1;
			page[2] = P;
			page[3] = P + 1;
		}
		else
		{
			page[0] = N - P + 1;
			page[1] = N - P + 2;
			page[2] = P - 1;
			page[3] = P;
		}
	}
	else
	{
		if (P % 2 != 0)
		{
			page[0] = P;
			page[1] = P + 1;
			page[2] = N - P;
			page[3] = N - P + 1;
		}
		else
		{
			page[0] = P - 1;
			page[1] = P;
			page[2] = N - P + 1;
			page[3] = N - P + 2;
		}
	}


	for (int i = 0; i < 4; i++)
	{
		if (page[i] != P)
			printf("%d ", page[i]);
	}
	printf("\n");
}
}