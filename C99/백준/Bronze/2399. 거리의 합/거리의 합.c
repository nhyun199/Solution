#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
	long long distance = 0;
	scanf("%d", &n);
	int* coord = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
		scanf("%d", &coord[i]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				distance += abs(coord[i] - coord[j]);
			}
		}
	}
	printf("%lld", distance);
	free(coord);
}