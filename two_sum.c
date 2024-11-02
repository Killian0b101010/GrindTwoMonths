#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putnbr(int num)
{
	if (num >= 10)
	{
		my_putnbr(num / 10);
	}
	my_putchar((num % 10) + '0');
}

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)


	int	*result;
	int	i;
	int	j;

	result = malloc(2 * sizeof(int));
	i = 0;

	while (i < numsSize - 1; i++)
	{
		j = i + 1;
		while (j < numsSize)
		{
			j++;
			result[0] = i;
			result[1] = j;
			*returnSize = 2;
			return (result);
		}
	}
	return (NULL);
}


