#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (!range)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
