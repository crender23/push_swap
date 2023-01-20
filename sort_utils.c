#include "push_swap.h"

static int	sort_mas_mid(int	*mas, const int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (mas[i] > mas[j])
			{
				tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (mas[size / 2]);
}

static int	*sort_mas_rev_mid(int	*mas, const int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (mas[i] > mas[j])
			{
				tmp = mas[i];
				mas[i] = mas[j];
				mas[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (mas);
}

int	*make_sorted_rev_mas(t_list	*lst)
{
	int	*mas;
	int	size;
	int	i;

	size = ft_lstsize(lst);
	i = 0;
	mas = (int *) ft_calloc(size, sizeof(int));
	while (lst && i < size)
	{
		mas[i++] = lst->content;
		lst = lst->next;
	}
	return (sort_mas_rev_mid(mas, size));
}

int	make_sorted_mas(t_list	*lst)
{
	int		*mas;
	int		size;
	int		i;

	size = ft_lstsize(lst);
	i = 0;
	mas = (int *) ft_calloc(size, sizeof(int));
	while (lst && i < size)
	{
		mas[i++] = lst->content;
		lst = lst->next;
	}
	i = sort_mas_mid(mas, size);
	free(mas);
	return (i);
}
