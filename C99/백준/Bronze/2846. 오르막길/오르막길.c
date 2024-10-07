#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
	scanf("%d", &N);
	int* road = malloc(N * sizeof(int));
	int hill = 0;
	int maxhill = 0;
	for (int i = 0; i < N; i++)
		scanf("%d", &road[i]);
	int start = road[0];
	int last = 0;
	int i = 1;
	while (i < N)
	{
		if (road[i - 1] < road[i])
		{
			last = road[i];
			i++;
		}

		if (road[i - 1] >= road[i])
		{
			hill = last - start;
			if (hill > maxhill)
				maxhill = hill;
			start = road[i];
			i++;
		}
	}
	printf("%d", maxhill);
}