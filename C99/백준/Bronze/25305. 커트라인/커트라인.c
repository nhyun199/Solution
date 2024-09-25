#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
	int N, k;
	scanf("%d %d", &N, &k);
	int* score = (int*)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);
	}
    
    qsort(score, N, sizeof(int), compare);
    
    printf("%d", score[k-1]);

	free(score);
}