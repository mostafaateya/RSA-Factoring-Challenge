#include "mostafa_attiya.h"

/**
 * mos_fa - factorizes a number
 * @a: pointer to the number
 * Return: 0 on Success
 */

int mos_fa(char *a)
{
	uint32_t x;
	uint32_t z;

	x = atoi(a);
	for (z = 2; z < x; z++)
	{
		if (x % z == 0)
		{
			printf("%d=%d*%d\n", x, x / z, z);
			break;
		}
	}
return (0);
}

/**
 * main - main function
 * @argc: count of arguments
 * @argv: array of pointers of argument
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	FILE *ff;
	size_t x;
	ssize_t y;
	char *a = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	ff = fopen(argv[1], "r");
	if (ff == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((y = getline(&a, &x, ff)) != -1)
	{
		mos_fa(a);
	}
return (0);
}
