#include "push_swap.h"

int	main(int argc, char	**argv)
{
	t_list	*lst;
	int		i;

	check(argc, argv);
	i = 1;
	while (i < argc)
		stack(argv[i++], &lst);
	if (is_sorted(lst))
		succes_message(&lst);
	i = ft_lstsize(lst);
	if (i <= 5)
		sort_small_stack(&lst);
	else if (i % 500 != 0)
		long_sort(&lst);
	else
		long_long_sort(&lst);
	if (lst)
		ft_lstclear(&lst, del);
	return (0);
}
