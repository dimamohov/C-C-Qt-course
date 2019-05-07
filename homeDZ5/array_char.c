#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	int main() 
	{ 
		
		char arr[1000];
		for(int i=0;i<1000;i++)
		     arr[i] = 'A'+rand()%('z'-'A');
		for(int i=0;i<1000;i++)
		     printf("a[%d]:%c\n",i,arr[i]);
	return 0;


	}


