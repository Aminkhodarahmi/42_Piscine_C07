
#include <stdio.h>

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = max - min;
	ptr = malloc(sizeof(int) * (i));

	while(i >= 0)
	{
		ptr[i] = min;
		min++;
		i--;
	}

	*range = ptr;
	return (max - min);
}

int	main(void)
{
	int start;
	int end;
	int len;

	start = 30;
	end = 60;

	len = ft_ultimate_range(array, start, end);
	int i = 0;
	while(i <= 30)
	{
		printf("%d", *array[i]);
		i++;
	}
}
