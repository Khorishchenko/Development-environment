#include "libmx.h"


void mx_proverka(char *str)
{
	
	int i = 0;
	while (str[i] != '\n') 
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
		{
	
			mx_printstr("error: line 1 isn't valid");
			exit(1);
		}
		i++;
	}

	i++;

	int y = 2;
	
	while (str[i] != '\0') 
	{
		int cou = 0;
		int cit = 0;
		int cat = 0;

		if (str[i] == '\n') 
			y++;

		if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			&& str[i + 1] >= 48 && str[i + 1] <= 57 && ((str[i + 2] >= 'A' && str[i + 2] <= 'Z') 		// int
				|| (str[i + 2] >= 'a' && str[i + 2] <= 'z'))) 
		{
			write(1, "error: line ", 12);
			mx_printint(y);
			write(1, " isn't valid", 12);
			write(1, "\n", 1);
			exit(1);
		}

		if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
            && str[i + 1] >= 33 && ((str[i + 1] <= 43) || (str[i + 1] == 46)            // 4 чи є між АЛФ будь які см крім "-" ","
            || (str[i + 1] == 47)) && ((str[i + 2] >= 'A' && str[i + 2] <= 'Z') 
                || (str[i + 2] >= 'a' && str[i + 2] <= 'z'))) 
		{
            write(1,"error: line ", 12);
            mx_printint(y);
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
        }

	    int z = i;
        if (str[z] == '\n')
        {
            while (str[z + 1] != '\n' && str[z + 1] != '\0')
            {
                if ((str[z] == '-') || (str[z] == ','))                      // 5 Чи є більше ніж по 1 см "-" ","" 
                    cou++;
                z++;
            }
        }

        if (cou > 2) 
        {
            int x = y;
            write(1,"error: line ", 12);
            mx_printint(x);                               // 5 Більше ніж 1 сим "-" ","
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
        }
    
        if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
            && str[i + 1] == '-' && (!(str[i + 2] >= 'A' && str[i + 2] <= 'Z')          // 6 перед алф чи є "-" після "-" чи є алф
                || (str[i + 2] >= 'a' && str[i + 2] <= 'z'))) 
        {
            write(1,"error: line ", 12);
            mx_printint(y);
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
        }

        if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))      // 7 після алф чи є "," а після чи є "int"
            && str[i + 1] == ',' && (((str[i + 2] < 48) || (str[i + 2] > 57)))) 
        {
            write(1,"error: line ", 12);
            mx_printint(y);
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
		}

		int d = i;
        if (str[d] == '\n')
        {
            while (str[d + 1] != '\n' && str[d + 1] != '\0')
            {
                if (str[d] == '-')
                	cit += 1;													// чи є по 1 сим "-"  ","
                if (str[d] == ',')
                	cat += 1;
                d++;
            }

            if (!(cit == 1 && cat == 1))
            {
            	write(1,"error: line ", 12);							// чи є по 1 сим "-"  ","
            	mx_printint(y);
            	write(1, " isn't valid", 12);
            	write(1, "\n", 1);
            	exit(1);
        	}	
        }

        if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
            	&& str[i + 1] == '-' && str[i + 2] >= 48 && str[i + 2] <= 57) 
        {
            write(1,"error: line ", 12);							
            mx_printint(y);
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
        }

        if (((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        		&& str[i + 1] >= 48 && str[i + 1] <= 57 && str[i + 2] == '-')
        {
            write(1,"error: line ", 12);							
            mx_printint(y);
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
	    }

	    if (str[i] >= 48 && str[i] <= 57 && 
	    	((str[i + 1] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i + 1] <= 'z') 	// чи є після цифри будь який символ !
	    	|| (str[i + 1] >= 33 && str[i + 1] <= 47)))
	    {
	    	write(1,"error: line ", 12);							
            mx_printint(y);
            write(1, " isn't valid", 12);
            write(1, "\n", 1);
            exit(1);
	    }

		i++;
	}
	
}


