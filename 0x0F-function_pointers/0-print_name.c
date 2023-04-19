#include "function_pointers.h"
/**
 * print_name - prints out given name
 * @name: given name
 * @f:fuction pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
