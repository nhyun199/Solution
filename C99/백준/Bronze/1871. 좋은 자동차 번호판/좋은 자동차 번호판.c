#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		char numberPlate[9];
		char* token;
		int LLL = 0;
		int DDDD = 0;
		scanf("%s", numberPlate);
		LLL = (numberPlate[0] - 'A') * pow(26, 2) +
			  (numberPlate[1] - 'A') * pow(26, 1) +
			  (numberPlate[2] - 'A');
		token = strtok(numberPlate, "-");
		token = strtok(NULL, "-");
		DDDD = strtol(token, NULL, 10);

		if (abs(LLL - DDDD) <= 100)
			printf("nice\n");
		else
			printf("not nice\n");
	}

	return 0;
}