#include "libmx.h"

void mx_pop_front(t_list **head)
{
  t_list * prev = NULL;
  prev = (*head);
  (*head) = (*head)->next;
  free(prev);
}

