#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as it is
 * @name: name of person.
 * Return: Nothin
 */
void print_name_as_is(char *name)
{
	printf("Hello my name is %s\n", name);
}
/**
 * print_name_uppercase - print name in uppercase
 * @name: name of person
 * Retyrn: Nothing
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf(" is my uppercase name!");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			_putchar(name[i] + 'A' - 'a');
		}
		else
		{
			_putchar(name[i]);
		}
		i++;
	}
}
/**
 * main - check code
 * Return: Always 0.
 */
int main(void)
{
	print_name("Thato", print_name_as_is);
	print_name("Thato Tarto", print_name_uppercase);
	printf("\n");
	return (0);
}
