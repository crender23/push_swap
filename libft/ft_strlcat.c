#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	i = 0;
	while (*(dest + i) && i < size)
		i++;
	j = 0;
	while (j < src_len && i + j + 1 < size)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (i < size)
		*(dest + i + j) = '\0';
	return (i + src_len);
}
