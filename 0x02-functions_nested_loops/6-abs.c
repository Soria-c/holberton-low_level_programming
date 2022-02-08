/**
 * _abs - checks sign of an integer
 * @x: integer input
 * Return: Absolute value of 'x' as int
 */

int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}
