#include <stdio.h>

int main()
{
    char shuffle[51];
	scanf("%s", shuffle);
	int len = strlen(shuffle);

	int cup1 = 1;
	int cup2 = 0;
	int cup3 = 0;

	for (int i = 0; i < len; i++)
	{
		if (shuffle[i] == 'A')
		{
			if (cup1 == 1)
			{
				cup1 = 0;
				cup2 = 1;
			}
			else if (cup2 == 1)
			{
				cup2 = 0;
				cup1 = 1;
			}
		}
		else if (shuffle[i] == 'B')
		{
			if (cup2 == 1)
			{
				cup2 = 0;
				cup3 = 1;
			}
			else if (cup3 == 1)
			{
				cup3 = 0;
				cup2 = 1;
			}
		}
		else if(shuffle[i] == 'C')
		{
			if (cup3 == 1)
			{
				cup3 = 0;
				cup1 = 1;
			}
			else if (cup1 == 1)
			{
				cup1 = 0;
				cup3 = 1;
			}
		}
	}

	if (cup1 == 1)
		printf("1");
	else if (cup2 == 1)
		printf("2");
	else if (cup3 == 1)
		printf("3");
}