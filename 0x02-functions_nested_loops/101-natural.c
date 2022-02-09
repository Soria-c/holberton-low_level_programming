#include <stdio.h>

int main(void)
{
	int n, sum;
	
	sum = 0;
	for (n = 1023; n > 0; n--)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
}
