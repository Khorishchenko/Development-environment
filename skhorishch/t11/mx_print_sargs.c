#include <unistd.h>
#include <stdio.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strlen( const char *s);
int mx_strcmp(const char *s1,const char *s2);

int main(int argc, char *argv[]) {
    if (argc > 1) 
    {
        for (int i = 1; argc > i; i++) {
            for (int j = i + 1; j < argc; j++) {
                if (mx_strcmp(argv[i], argv[j]) > 0) {
                    char *g = argv[i];
                    argv[i] = argv[j];
                    argv[j] = g;
                }
            }
        }
        for (int l = 1; l < argc; l++) {
                mx_printstr(argv[l]);
            }
    }
    else
        return 0;
}
