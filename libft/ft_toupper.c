#include "libft.h"

int	ft_toupper(int code)
{
	if (code >= 97 && code <= 122)
		return (code - ('a' - 'A'));
	return (code);
}
