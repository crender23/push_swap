#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list	*lst, void (*del)(int))
{
	if (!lst)
		return ;
	(*del)(lst->content);
	free(lst);
}
