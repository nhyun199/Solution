#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int decimal = 0;
	int num;
	int index = 0;
	char hexa[7];
	scanf("%s", hexa);
	
	int len = strlen(hexa);

	for (int i = len - 1; i >= 0; i--)
	{
		if (hexa[i] <= 57)
			num = hexa[i] - '0'; // '0' = 48
		else
			num = hexa[i] - '7'; // '7' = 55

		decimal += num * pow(16, index);
		index++;
	}
	printf("%d", decimal);
}