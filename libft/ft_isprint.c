#include "libft.h"

int	ft_isprint(int code)
{
	if (code >= 32 && code < 127)
		return (1);
	else
		return (0);
}
