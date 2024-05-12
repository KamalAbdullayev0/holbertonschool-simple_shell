#include <errno.h>
#include "main.h"
/**
  * arg_counter - counts number of arguments
  * @buf: user input
  * @size: size of user input
  * Return: number of argumnets
  */
int arg_counter(char *buf, int size)
{
	int count = 0, i;

	for (i = 1; i < size; i++)
		count += ((buf[i - 1] == ' ' &&
					(buf[i] != ' ' && buf[i] != '\n')) ||
				(i == 1 &&
				 buf[i - 1] != ' '));
	return (count);
}
