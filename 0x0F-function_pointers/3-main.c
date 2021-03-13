#include "3-calc.h"

/**
 * main - calculator
 * @argc: number of arguments passed in
 * @argv: pointer to array of arguments passed in
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((get_op_func(argv[2]) == op_div && atoi(argv[3]) == 0)
	    || (get_op_func(argv[2]) == op_mod && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
