#include "libft.h"

int	ft_isascii(int code)
{
	if (code >= 0 && code <= 127)
		return (1);
	else
		return (0);
}
