#ifndef LIST
#define LIST
#include <stdio.h>
#include <stdlib.h>
struct live
{
	char my_life[40];
	int many;
};
struct month
{
	char month[20];
	char name[20];
	int year;
	int day;
	struct live lif;
};
#endif
