#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *))
{

	//чтобы не портить lst
	t_list *sorted_lst = lst;

	//длинна связного списка
	int lst_len = mx_list_size(sorted_lst);
	bool  result;
	
	//алгоритм сортировки
	for (int i = 0; i < lst_len-1; ++i)
	{
		t_list *tmp_sorted_lst = lst;
		
		for (int j = 0; j < lst_len - 1; ++j)
		{
			result = cmp(tmp_sorted_lst -> data, tmp_sorted_lst -> next -> data);
			if (result)
			{	
				void *tmp = tmp_sorted_lst -> data;
				tmp_sorted_lst -> data =  tmp_sorted_lst -> next -> data;
				tmp_sorted_lst -> next -> data = tmp;
			}
			tmp_sorted_lst = tmp_sorted_lst -> next;
		}
	}
	return lst;
}

