#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
	scanf("%d", &N);
	int* trophy = (int*)malloc(N*sizeof(int));
	int highLeft = 1;
	

	for (int i = 0; i < N; i++)
		scanf("%d", &trophy[i]);
    
    int maxLeft = trophy[0];
    
	for (int i = 1; i < N; i++)
	{
		if (trophy[i] > maxLeft)
		{
			highLeft++;
			maxLeft = trophy[i];
		}
	}
	
	int highRight = 1;
	int maxRight = trophy[N - 1];

	for (int i = N - 2; i >= 0; i--)
	{
		if (trophy[i] > maxRight)
		{
			highRight++;
			maxRight = trophy[i];
		}
	}

	printf("%d\n%d", highLeft, highRight);
	free(trophy);
}