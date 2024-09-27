#include <stdio.h>
#include <string.h>

int main()
{
    int N, L;
	scanf("%d %d", &N, &L);
	int index = 0;
	int label = 1;
	char chL = L + '0';
	
	while (index < N)
	{
		char chLabel[12];
		sprintf(chLabel, "%d", label);
		
		if (strchr(chLabel, chL) == NULL)
		{
			index++;
		}
		
		if (index == N)
			break;

		label++;
	}
	printf("%d", label);
}