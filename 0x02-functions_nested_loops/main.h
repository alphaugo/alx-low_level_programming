#ifndef MAIN_H
#define MAIN_H
/* MAIN_H*/

int _putchar(char c);
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}

#endif
