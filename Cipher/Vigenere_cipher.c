#include<stdio.h>	// ДОРАБОТАТЬ ПРОГРАММУ!!!
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[])
{
	char p[15] = argv[1];
	int alph = 1;

	for (int i=0, n=strlen(k); i<n; i++)
	{
        	if((k[i]>90 && k[i]<97) || k[i]<65 || k[i]>122)
        	alph = 0;
    	}

    	if (argc != 2 || alph==0)
    	{
        	printf("not a valid key\n");
        	return 1;
    	}

    	for (int i=0, j=0, np=strlen(p), nk=strlen(k); i<np; i++)
    	{
        	if (p[i]>=65 && p[i]<=90)
        	{
            		if (k[j]>=65 && k[j]<=90) p[i] = (p[i]-65+k[j]-65)%26+65;
            		else if (k[j]>=97 && k[j]<=122) p[i] = (p[i]-65+k[j]-97)%26+65;
            		j++;
        	}
        	else if (p[i]>=97 && p[i]<=122)
        	{
            		if (k[j]>=65 && k[j]<=90) p[i] = (p[i]-97+k[j]-65)%26+97;
            		else if (k[j]>=97 && k[j]<=122) p[i] = (p[i]-97+k[j]-97)%26+97;
            		j++;
        	}
        	printf("%c", p[i]);
        	if(j==nk) j=0;
    	}
    	printf("\n");
    	return 0;
}
