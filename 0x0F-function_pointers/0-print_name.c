
/**
 * print_name - a function that prints a name
 * @name: an argument 
 * @f: an argument that points to another argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
