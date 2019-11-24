#include "libmx.h"

void mx_pop_back(t_list **head)
{
  t_list *pFwd = NULL;  //текущий узел
  t_list *pBwd = NULL;  //предыдущий узел
  pFwd = *head; 
  while (pFwd->next) { 
    pBwd = pFwd;
    pFwd = pFwd->next;
  }
 
  if (pBwd == NULL) {
    free(*head);
    *head = NULL;
  } else {
    free(pFwd->next);
    pBwd->next = NULL;
  }
}

