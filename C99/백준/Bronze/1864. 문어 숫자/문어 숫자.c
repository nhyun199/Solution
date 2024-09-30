#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    while (1)
	{
		char octo[9];
		scanf("%s", octo);

		if (octo[0] == '#')
			break;

		int len = strlen(octo);
		int num = 0;
		int sum = 0;
		int index = 0;

		for (int i = len - 1; i >= 0; i--)
		{
			if (octo[i] == '-')
				num = 0;
			else if (octo[i] == '\\')
				num = 1;
			else if (octo[i] == '(')
				num = 2;
			else if (octo[i] == '@')
				num = 3;
			else if (octo[i] == '?')
				num = 4;
			else if (octo[i] == '>')
				num = 5;
			else if (octo[i] == '&')
				num = 6;
			else if (octo[i] == '%')
				num = 7;
			else if (octo[i] == '/')
				num = -1;

			sum += num * pow(8, index);
			index++;
		}
		printf("%d\n", sum);
	}
	return 0;
}