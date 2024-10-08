#include <stdio.h>
#include <string.h>

int main()
{
    int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int X;
		char num[11];
		int number[10] = { 0 };
		int differ = 0;
		scanf("%d", &X);
		sprintf(num, "%d", X);
		int len = strlen(num);

		for (int j = 0; j < len; j++)
		{
			number[num[j] - '0']++;
		}

		for (int k = 0; k < 10; k++)
		{
			if (number[k] > 0)
				differ++;
		}

		printf("%d\n", differ);
	}    
}