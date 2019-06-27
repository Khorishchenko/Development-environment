#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct date
{
	int day;
	char month[20];
	int year;
};

struct persone
{
	char firstname[20];
	char lastname[20];
	struct date bd;
};

int main(void)
{
	struct persone p;
	printf("enter name: ");
	scanf("%s", p.firstname);
	printf("Enter lastname: ");
	scanf("%s", p.lastname);
	printf("Enter year old: ");
	scanf("%d", &p.bd.day);
	printf("Month: ");
	scanf("%s", p.bd.month);
	printf("Year: ");
	scanf("%d", &p.bd.year);
	printf("\n You enter : %s %s, date year old %d %s %d year", p.firstname, p.lastname, p.bd.day, p.bd.month, p.bd.year);
	printf("\n");
	return 0;
}
