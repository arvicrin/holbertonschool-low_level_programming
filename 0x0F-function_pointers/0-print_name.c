#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_name - fills memory with a constant byte
  * @name: is the name of the dog
  * @f: is a funtion pointer
  * Return: a void pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
