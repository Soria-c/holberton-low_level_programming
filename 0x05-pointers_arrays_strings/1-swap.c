/**
 * swap_int - function that swap values between two variables
 * @a: int variable
 * @b: int variable
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
