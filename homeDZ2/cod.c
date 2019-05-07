// Домашнее задание №2


# include <stdio.h>
#include <assert.h>

int main (void)
{
	int c;
	while ((c =getchar()) != EOF) {
	printf(" %3d%s", c, (c =='\n' ? "\n" : ""));
	}
	assert( ! ferror(stdin));

return 0;
}


