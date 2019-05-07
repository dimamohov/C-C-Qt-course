#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
          {
             FILE *f;                            //создаём объект класса FILE
             f = fopen("s1.txt","r");     //открытие файла для чтения его данных
	     if (f)
                          {
                           fseek(f,0,SEEK_END);              
			   long size=0;
			   size =ftell(f);
			   printf("Размер файла равен %ld\n",size);			
                           fclose(f); 
			  }
		
            else printf(" Файл не существует");
                                        
   
    return 0;
}
