// Домашняя работа №7



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 100
#define MAX_NAME 128           //Максимальное число символов в фамилии
#define MAX_NUMBER 12         //Максимальное число цифр в телеф. номере
struct list
{
    char name[MAX_NAME];
    char p_number[MAX_NUMBER];
} ;

void add();
void print();
bool find();

int main()
{
    int input; 
    
       
    do {
    printf( "ГЛАВНОЕ МЕНЮ СПРАВОЧНИКА\n" );
    printf( "1. Добавить запись\n" );
    printf( "2. Вывести записи\n" );
    printf( "3. Поиск записи\n" );
    printf( "4. Выход\n" );
    printf( "Ваш выбор: " );
   
    
   
    scanf( "%d", &input );
    switch ( input ) {
        case 1: {          
            	 add();
 	   	}

            break;
        case 2:{
                 printf("---------------------------------\n");
		 print();
		 printf("---------------------------------\n");
		}
            break;
        case 3:{
            printf("---------------------------------\n");
	    find();
	    printf("---------------------------------\n");
	       }
            break;
        case 4:
            printf( "Всего доброго! Работа со справочником завершена!\n" );
            break;
        default:
            printf( "Неправильный ввод.\n" );
    }
}
   while (input != 4);
    getchar();

    return 0;
}

//-----------------------добавление записи в справочник------------------
void add()
{
	char c ='y';
	struct list arr[N];
	FILE *file;
	file = fopen("book.txt", "a+t");
	int i = 0;
	while (c == 'y') 
	{		
		printf("Введите имя:"); 
		scanf("%s",arr[i].name);
		printf("Введите номер телефона:"); 
		scanf("%s",arr[i].p_number);
		fprintf(file,"%s ",arr[i].name);
		fprintf(file,"%s\n",arr[i].p_number);
		printf("продолжить ввод - y, выход - n\n"); 
		i++;
		scanf("%s", &c);
			
	}
	fclose(file);	 

}

//-------------------вывод записей из справочника-----------------------
void print()
{
	char ch;
	FILE *file;
	file = fopen("book.txt", "a+t");
	if (file == NULL)
	{
		printf("Ошибка открытия");
	}

	ch = getc(file);
	while (ch != EOF) 
	{
	putchar(ch);
	ch = getc(file);	
	}
	fclose(file);
}

//--------------поиск записи--------------------------------------------

bool find() {                                   
    FILE *file;
    file = fopen("book.txt", "rt");
    if (!file) {
        printf("Ошибка открытия справочника!");
        return false;
    }
    char fd[21];
    char line[53];
    bool one = true;

    printf("Введите символы для поиска: ");
    scanf("%s", fd);
    while (fgets(line, sizeof(line), file)) {
        char *succesful = strstr(line, fd);
        if (succesful != NULL) {
            printf("\n%s", line);
            one = false;
        }
    }
    if (one)
        printf("\nСовпадений не найдено\n");

    fclose(file);
    return true;
}
