#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - fills memory with a constant byte
  * @str: is the size of the pointer
  * Return: an address
  */

char *_strdup(char *str)
{
	char *s;
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
		;

	s = malloc(sizeof(char) * (size + 1));
	if (size == 0 || !str)
		return (NULL);
	
	for (i = 0; i < size; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
