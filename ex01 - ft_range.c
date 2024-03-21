#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	idx;
	int	range;
	int	*buffer;
	int	*a;

	if (min >= max)
		return (0);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	a = buffer;
	if (!a)
		return (0);
	idx = 0;
	while (idx < range)
	{
		buffer[idx] = min + idx;
		idx++;
	}
	return (buffer);
}
