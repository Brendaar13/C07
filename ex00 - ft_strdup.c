#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	str_len(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	int		idx;
	char	*dest;
	char	*a;

	idx = 0;
	a = ((dest = (char *)malloc(str_len(src) * sizeof(char) + 1)));
	if (!a)
	{
		return (0);
	}
	while (src[idx])
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
