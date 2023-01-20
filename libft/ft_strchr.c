#include "libft.h"

char	*ft_strchr(const char	*str, int code)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) str;
	while (*(ptr + i))
	{
		if (*(ptr + i) == (char) code)
			return (ptr + i);
		i++;
	}
	if (code == '\0')
		return (ptr + i);
	return (0);
}
