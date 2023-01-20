#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char	*str)
{
	char	*res;
	size_t	length;

	length = ft_strlen(str) + 1;
	res = (char *) malloc(length * sizeof(char));
	if (res)
		return (ft_memcpy(res, str, length));
	return (0);
}
