#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *ptr;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	ptr = malloc(sizeof((*src) * (len)));

	while (i <= len)
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "amin khodarahmi";
	char	*ptr;

	ptr = ft_strdup(src);
	printf ("res = %s\n", ptr);
	printf ("first = %s \n", src);
	return (0);	
}