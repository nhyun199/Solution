#include <stdio.h>
#include <math.h>

int main()
{
    int M, N;
	int sum = 0;
	int min = -1;
	int X = 0;
	scanf("%d %d", &M, &N);
	
	for (int i = M; i <= N; i++)
	{
		int root = (int)sqrt(i);

		if (root * root == i)
		{
			sum += i;
			if (min == -1 || min > i)
				min = i;
		}
	}
	if (min == -1)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
}