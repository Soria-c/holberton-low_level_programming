/**
 * print_sign - checks sign of an integer
 * @n: integer input
 * Return: 1 if positive, -1 if negative, 0 if 0
 */

int _abs(int x) 
{
	if (x < 0)
	{
		int y = x * (-1);
		return (y);
	}
	else
		return (x);
}
