#include <stdio.h>
#include <stdlib.h>
#include <string.h>


	
	 int recur( int num)
	{
	
		int s;
		s = num%10;
	if (num >= 10)
		s+=recur(num/10);
	return s;
	}
	
	int main() 
	{ 
		int a = 5061979;
		int res;		
		res = recur(a);
		printf("%d \n", res);
	return 0;

	}

	
