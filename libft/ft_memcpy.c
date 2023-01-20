#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	num)
{
	char	*to;
	char	*from;

	to = (char *) dest;
	from = (char *) src;
	if (!to && !from)
		return (0);
	while (num--)
		*to++ = *from++;
	return (dest);
}
