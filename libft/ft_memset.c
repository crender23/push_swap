#include "libft.h"

void	*ft_memset(void	*source, int code, size_t	length)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *) source;
	while (i < length)
	{
		*(str + i) = (unsigned char) code;
		i++;
	}
	return (source);
}
