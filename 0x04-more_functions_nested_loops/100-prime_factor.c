#include <stdio.h>

int main (void)
{
	unsigned long long j;
	j = 612852475143;
	while (j % 3 == 0)
	{
		j = j /3;
	}
	while (j % 4019 == 0)
	{
		j = j /4019;
	}
	printf("%llu", j);
	return (0);
}
