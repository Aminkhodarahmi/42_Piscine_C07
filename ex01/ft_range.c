
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;
	int	j;

	j = max - min;
	ptr = (int *)malloc(sizeof(*ptr) * (j));
	
	i = 0;
	while (j >= 0)
	{
		ptr[i] = min;
		min++;
		i++;
		j--;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>

int		main()
{
	int start;
	int end;

	start = 30;
	end = 60;
	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(i <= 30)
	{
		printf("%d", array[i]);
		i++;
	}
}
