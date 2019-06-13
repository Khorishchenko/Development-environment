void mx_printchar(char c);

void    act_0_1(int n) {
    for (int i = 0; i < n/2+1; i++)
        mx_printchar(' ');
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++)
        mx_printchar('-');
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = 0; i < n/2; i++) {
        for (int j = n / 2 - i; j > 0; j--)
            mx_printchar(' ');
        mx_printchar('/');
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');
        mx_printchar('/');
        for (int j = 0; j < i; j++)
            mx_printchar(' ');
        mx_printchar('|');
        mx_printchar('\n');
   }
}

void    act_2_3(int n) {
    mx_printchar('+');
    for (int i = 0; i < (2 * n); i++)
        mx_printchar('-');
    mx_printchar('+');
    for (int i = 0; i < n / 2; i++)
        mx_printchar(' ');
    mx_printchar('|');
    mx_printchar('\n');

    for (int i = 0; i < n - n / 2 -1; i++) {
        mx_printchar('|');
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');
        mx_printchar('|');
        int k;
        if (n % 2 == 0)
            k = n - n / 2;
        else
            k = n - n / 2 - 1;
        for (int j = 0; j < k; j++)
            mx_printchar(' ');
        mx_printchar('|');
        mx_printchar('\n');
   }
}

void    act_4_5(int n) {
    mx_printchar('|');
    for (int i = 0; i < 2 * n; i++)
        mx_printchar(' ');
    mx_printchar('|');
    for (int i = 0; i < n / 2; i++)
        mx_printchar(' ');
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = n/2; i > 0; i--) {
        mx_printchar('|');
        for (int j = 0; j < n * 2; j++)
            mx_printchar(' ');
        mx_printchar('|');
        for (int j = 0; j < i - 1; j++)
            mx_printchar(' ');
        mx_printchar('/');
        mx_printchar('\n');
   }
}

void    act_6(int n) {
    mx_printchar('+');
    for (int i = 0; i < 2 * n; i++)
        mx_printchar('-');
    mx_printchar('+');
    mx_printchar('\n');
}

void mx_cube(int n) {
   if (n < 2)
       return;
   act_0_1(n);
   act_2_3(n);
   act_4_5(n);
   act_6(n);
}
