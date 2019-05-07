// Домашнее задание №2


# include <stdio.h>
# include <stdlib.h>

int main()
{

	FILE *s1;
	s1 = fopen("s1.odt", "w");
	fprintf(s1, "М\n");
	fprintf(s1,"Д\n");
	fprintf(s1,"В\n");
	fclose(s1);


}
