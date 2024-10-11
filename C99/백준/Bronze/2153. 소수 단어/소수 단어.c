#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char S[21];
	scanf("%s", S);
    
	int sum = 0;
	int len = strlen(S);
	bool isPrime = true;

    for (int i = 0; i < len; i++) 
    {
        if (S[i] >= 'a') 
            sum += (S[i] - 'a' + 1);
        else
            sum += (S[i] - 'A' + 27);
    }
	
	if (sum == 1)
		isPrime = true;
	else
	{
		for (int i = 2; i < sum; i++)
		{
			if (sum % i == 0)
			{
				isPrime = false;
				break;
			}
		}
	}

	if (isPrime)
		printf("It is a prime word.");
	else
		printf("It is not a prime word.");
}