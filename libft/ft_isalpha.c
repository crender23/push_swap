#include "libft.h"

int	ft_isalpha(int code)
{
	if ((code > 64 && code < 91) || (code > 96 && code < 123))
		return (1);
	else
		return (0);
}
