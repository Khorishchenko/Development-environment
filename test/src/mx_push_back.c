#include "libmx.h"

void mx_push_back(t_list **list, void *data)
{
	t_list *node = (t_list *)mx_strnew((sizeof(t_list)));
	node->data = data;
	node->next = NULL;
	t_list *len_list = *list;
	while (len_list != NULL)
	{
		len_list = len_list->next;
	}
	len_list->next = node;
}

