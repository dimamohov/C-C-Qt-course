#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	
	int main() 
	{ 
	       char filename[255];
 		FILE *S;	
		srand(5);
		printf("введите имена 10 файлов\n");
		printf("имя файла должно состоять из одного символа\n");
		for (int name=0;name<10;name++)
		{
		fgets(filename,3,stdin);
		S = fopen(strcat(filename, ".txt"),"w");
			for (int i=0; i<1000;i++) 
				{
				fprintf(S, "i: %d answer:%d\n",i,80+rand()%(21));
				}
			
		fclose(S);
		}
				
	return 0;

	}

	
