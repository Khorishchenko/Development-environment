#include "libmx.h"

char *mx_file_to_str(const char *file)
{
	char buf[1];
	int count = 0;

	int f = open(file, O_RDONLY);
	if (f < 0)
		return NULL;

	for (int c = read(f, buf, 1); c > 0; count++)
		c = read(f, buf, 1);

	close(f);

	char *result = mx_strnew(count);
	f = open(file, O_RDONLY);
	read(f, result, count);
	close(f);
	return result;
}

