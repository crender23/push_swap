#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (str)
	{
		ft_memcpy(str, s1, len1);
		ft_memmove(str + len1, s2, len2);
		*(str + len1 + len2) = '\0';
	}
	return (str);
}
