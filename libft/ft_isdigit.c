#include "libft.h"

int	ft_isdigit(int code)
{
	if (code >= '0' && code <= '9')
		return (1);
	else
		return (0);
}
