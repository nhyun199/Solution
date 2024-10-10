#include <stdio.h>
#include <stdbool.h>

int main()
{
    int M, N;
	int sum = 0;
	int min = 0;
	scanf("%d %d", &M, &N);

	for (int i = M; i <= N; i++)
	{
        if(i < 2)
            continue;
        
		bool isPrime = true;
		for (int j = 2; j <= i - 1; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			sum += i;
			if (min == 0)
				min = i;
		}
	}
	if (min == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);
}