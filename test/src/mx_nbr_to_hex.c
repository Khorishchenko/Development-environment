#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) 
{
   int tmp_nbr = nbr;
   int size = 0;

   while(tmp_nbr > 1) 
   {
       tmp_nbr /= 16;
       size++;
   }
   char *string = mx_strnew(size);
   size = 0;
   int y;
   while(nbr) 
   {
       nbr /= 16;
       y = nbr % 16;
       if (y < 10) 
       {
           string[size] = y + 48;
       }
       else 
       {
           string[size] = y + 87;
       }
       size++;
   }
   for(int i = 0; i < size / 2; i++)
   {
       char tmp;
       tmp = string[i];
       string[i] = string[size - i - 1];
       string[size - i - 1] = tmp;
   }
   return string;
}


