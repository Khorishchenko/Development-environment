#include "list.h"

t_list *mx_create_node(void *data);

int main(void) {
	t_list *bublic = mx_create_node("Bublic");
	printf("%s\n", bublic->data);
	return 0;
}

t_list *mx_create_node(void *data) {
	t_list *add = (t_list*)malloc(sizeof(t_list));
	
	add->data = data;
	add->next = NULL;

	return add;
}
