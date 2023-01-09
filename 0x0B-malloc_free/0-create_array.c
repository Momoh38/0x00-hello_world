#include <stdlib.h>
#include "main.h"
/**
*
*create_array - creates an array of chars
* @size: number of characters
* @c: initial array character
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	char *S;
	unsigned int num;
	if (size == 0)
		return NULL;
	S = malloc(size * sizeof(char));
	if (S == NULL)
	{
		return NULL;
	}
for (num = 0; num < size; num++)
	{
		S[num] = c;
	}
	return (S);
}

