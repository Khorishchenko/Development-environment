#include "libmx.h"

int mx_list_size(t_list *list)
{
	t_list	*begin_list;
	int		i;

	i = 0;
	begin_list = list;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

