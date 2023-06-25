#include "main.h"


/**
 * factorize - factorize a number
 * @buffer: pointer to the address of the number
 *
 * Return: product of 2 nums
 */
void factorize(char *buffer)
{

	unsigned long int num, i;

	num = atoi(buffer);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%lu=%lu*%lu\n",num,num/i,i);
			break;
		}
	}
}
