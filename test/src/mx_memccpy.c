#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) 
{
	int n1 = (int)n;
	char *cscr = (char *) src;
	char *cdst = (char *) dst;

	for(int i = 0; i < n1 && cscr[i - 1] != c; i++) 
	{
		cdst[i] = cscr[i];
	}
	return cdst;
}

