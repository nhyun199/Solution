#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
	char chN[7];
	scanf("%d", &N);
	char* listN = NULL; 
	sprintf(chN, "%d", N);

	for (int i = 1; i <= N; i++)
	{
		char num[7];
		sprintf(num, "%d", i);
		int len_num = strlen(num);

		if (listN == NULL)
		{
			listN = (char*)malloc(len_num+1);
			strcpy(listN, num);
		}
		else
		{
			int len_list = strlen(listN);
			listN = (char*)realloc(listN, len_list + len_num + 1);
			strcat(listN, num);
		}
	}
	char *pos = strstr(listN, chN);
	int index = pos - listN;
	printf("%d", index+1);
	free(listN);
}