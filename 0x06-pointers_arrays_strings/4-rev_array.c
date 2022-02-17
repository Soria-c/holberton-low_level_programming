/**
 * reverse_array - function that reverses an array of int.
 * @a: input integer array.
 * @n: number of elements.
 */

void reverse_array(int *a, int n)
{
	int s, b;
	int i = 0;

	b = n;
	if (n % 2 == 0)
		b--;
	for (n = n - 1; (n != b / 2); n--)
	{
		s = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = s;
		i++;
	}
}
