// Домашняя работа №2


# include <stdio.h>
# include <stdlib.h>
	
        int main()
{
	int c;
	scanf("%d",&c);
	switch (c) 
	{
	case 1:
		printf("O\n");
	break;
	case 2:
		printf("Д\n");
	break;
	case 3:
		printf("Т\n");
	break;
	case 4:
		printf("Ч\n");
	break;
	case 5:
		printf("П\n");
	break;
	case 6:
		printf("Ш\n");
	break;
	case 7:
		printf("С\n");
	break;
	case 8:
		printf("В\n");
	break;
	case 9:
		printf("Д\n");
	break;
	case 0:
		printf("Н\n");
	break;
	
	default:printf("Ошибка ввода\n");
	break;
	}
	return 0;
} 
