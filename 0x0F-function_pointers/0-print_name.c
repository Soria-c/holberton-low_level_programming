/**
 * print_name - callbacks another fucntion.
 * @name: address of array of char.
 * @f: address of function to be used.
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}

