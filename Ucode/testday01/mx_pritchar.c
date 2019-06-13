#include <unistd.h>

void mx_say_wake_up(char c);

int main(void)
{
	char str = 't';
	mx_say_wake_up(str);
	return 0;
}

void mx_say_wake_up(char c)
{
	write(1, &c, 1);
}

