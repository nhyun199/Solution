#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
	scanf("%d", &N);
	int* S = malloc(N * sizeof(int));
	int d, r;
	int lastTerm;

	for (int i = 0; i < N; i++)
		scanf("%d", &S[i]);
	
	if (S[1] - S[0] == S[2] - S[1])
	{
		d = S[1] - S[0];
		lastTerm = S[N - 1] + d;
	}
	else
	{
		r = S[1] / S[0];
		lastTerm = S[N - 1] * r;
	}
	printf("%d", lastTerm);
	free(S);
	return 0;
}