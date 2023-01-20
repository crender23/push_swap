#include "libft.h"

int	ft_isalnum(int code)
{
	if (ft_isdigit(code) || ft_isalpha(code))
		return (1);
	else
		return (0);
}
