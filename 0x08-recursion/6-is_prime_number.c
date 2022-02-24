int prime_factorsl(int min, int n, int c);

/**
 * is_prime_number - Determine if n is prime or not.
 * @n: input integer.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n % 5 == 0)
		return (0);
	return (prime_factorsl(2, n, 0));
}
/**
 * prime_factorsl - calculates number of prime factors of n less than n.
 * @n: input integer.
 * @min: min prime factor,
 * @c: counter of prime factors less than n.
 * Return: 1 if n has 0 prime factors less than n
 */
int prime_factorsl(int min, int n, int c)
{
	if (n != min)
	{
		if (n % min == 0)
		{
			n = n / min;
			c++;
			prime_factorsl(min, n, c);
		}
		else
		{
			min++;
			prime_factorsl(min, n, c);
		}
	}
	if (c == 0)
		return (1);
	return (0);
}
