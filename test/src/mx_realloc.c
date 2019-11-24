#include "libmx.h"


void *mx_realloc(void *ptr, size_t size)
{
	char	*newptr;
	size_t	cursize;

	if (ptr == 0)
		return (malloc(size));
	cursize = sizeof(ptr);
	if (size <= cursize)
		return (ptr);
	newptr = malloc(size);
	mx_memcpy(ptr, newptr, cursize);
	free(ptr);
	return (newptr);
}

