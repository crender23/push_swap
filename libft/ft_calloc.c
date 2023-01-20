#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t	nmemb, size_t	size)
{
	void	*res;

	res = (void *) malloc(nmemb * size);
	if (res)
	{
		ft_bzero(res, nmemb * size);
		return (res);
	}
	return (0);
}
