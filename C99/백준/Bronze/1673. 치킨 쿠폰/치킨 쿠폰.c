#include <stdio.h>

int main()
{
    int n, k;

	while (scanf("%d %d", &n, &k) != EOF) 
	{
		int coupon = n;
		int chicken = coupon;

		while (1)
		{
			int used = coupon / k;

			if (coupon < k)
				break;

			chicken += used;
			coupon = coupon - k * used + used;
		}

		printf("%d\n", chicken);
	}
}