#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, *(s1 + len)))
		len--;
	return (ft_substr(s1, 0, len + 1));
}
