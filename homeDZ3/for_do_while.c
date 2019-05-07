//Домашняя работа №2

# include <stdio.h>
# include <stdlib.h>
	
	int main()
{
	int j=0;
	for(int i=0;i<=3;i++)
	{
	 printf("%d \n",i);	
		do 
		{
			printf("%d",j);
			j++;

		}
		while (j<=3);
	j=0;
	printf("\n");
	}
	return 0;
}
