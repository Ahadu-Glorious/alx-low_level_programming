#include <stdio.h>


/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A pointer to the function used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/**
 * print_with_newline - Prints the name with a newline character.
 * @name: The name to be printed.
 */
void print_with_newline(char *name)
{
	if (name != NULL)
		printf("%s\n", name);
}

/**
 * print_with_exclamation - Prints the name with an exclamation mark.
 * @name: The name to be printed.
 */
void print_with_exclamation(char *name)
{
	if (name != NULL)
		printf("%s!\n", name);
}

int main(void)
{
	char name[] = "John Doe";

	printf("Printing name with newline:\n");
	print_name(name, print_with_newline);

	printf("Printing name with exclamation:\n");
	print_name(name, print_with_exclamation);

	return 0;
}
