#include "libft.h"

void	*ft_memchr(const void	*str, int code, size_t	n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (i < n)
	{
		if (*(ptr + i) == (char) code)
			return (ptr + i);
		i++;
	}
	return (0);
}
