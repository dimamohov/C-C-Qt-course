#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	int main() 
	{ 
	   int k=0;
	   int arr[256]={0};
	   char symbol;	
	   FILE *f = fopen("input.txt", "r");
	   symbol=fgetc(f);
	   while (symbol!=EOF)
		{
		 if (symbol>=0)
			{
			 arr[symbol]++;
			 k++;
			}
		symbol=fgetc(f);
 		}
	   fclose(f);
	   float fraction=1.0f/k;
	   for(unsigned char i=0;i<255;i++)
		{
		 if (arr[i]>0)
			printf("%c - %f\n",i,arr[i]*fraction);
		}

 	   return 0;

	}


