#include "libmx.h"

int m_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}


char *mx_del_extra_spaces(const char *str)
{
	 if (str == NULL) return NULL;
   char *temp = mx_strnew(strlen(str));
   int k = 0;
   for (int i = 0; str[i]; i++) {
       if (m_isspace(str[i]) && !m_isspace(str[i - 1])) 
       {
           temp[k] = ' ';
           k++;
       }
       else if (!m_isspace(str[i])) 
       {
           temp[k] = str[i];
           k++;
       }
   }
   char *trimed = mx_strtrim(temp);
   mx_strdel(&temp);
   return trimed;
}

