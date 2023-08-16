#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcodes
 * @argc: arg count
 * @argv: arg arr
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int b, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < b; a++)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
