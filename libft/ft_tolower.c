#include "libft.h"

int	ft_tolower(int code)
{
	if (code >= 65 && code <= 90)
		return (code + ('a' - 'A'));
	return (code);
}
