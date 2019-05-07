#include <stdio.h>
#include <stdlib.h>

	int main() 
	{ 
	int x = 0;
	loop1:
	x++;
	if(x<=100)
		{
		 printf("x:%d\n",x);
	         goto loop1;
		}
	return 0;
	}


