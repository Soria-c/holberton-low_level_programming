/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: input integer.
 * @i: counter.
 * Return: Perfect square root of n.
 */

int _sqrtp(int i, int n);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	return (_sqrtp(0, n));
}
/**
 * _sqrtp - auxiliar function
 * @i: counter.
 * @n: input integer
 * Return: -1 if n has not a perfect square, else returns the square root.
 */
int _sqrtp(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrtp(i + 1, n));
}
