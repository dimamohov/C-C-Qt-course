#include <stdio.h>
#include <stdlib.h>
#include "file1.h"
	int main() 
	{ 
		
	const int *m;
	printf("выберите ключевое слово\n");
	printf("1-->volatile\n2-->Extern\n3-->const\n4-->goto\n5-->Typedef\n6-->Sizeof\n");
	int c;
	scanf("%d",&c);
	switch (c) 
	{
	case 1:
		{
		    volatile int opt=1;
		    void F(void)
		         {
			  start:
			  if(opt==1)
				goto start;
			}	
		}
	break;
		//для работы необходимо скомпилировать два файла ter.c  ter1.c	
	case 2:
		{
		       
			 
			   printf("g_old:%d\n",g);
			   g++;
			   printf("g_new:%d\n",g);
			 

		}
	break;
	case 3:
		{
		          const int *m;
		          const int n=15;
		          m=&n;
		          printf("const:%d\n",*m);
		}
	break;
	case 4: {
		    int x = 0;
		    loop1:
		    x++;
		    if(x<=10)
		             {
		              printf("x:%d\n",x);
	                      goto loop1;
		             }
		}
	break;
	case 5:
		{		
		typedef int count;
		count x = 15;
		count y = 25;
		printf("x+y:%d\n",x+y);
		}
	break;
	case 6:
		{		
		struct Test1 {
   			 char a;
    			 char b;
    			 int c;
		} A;
 
		struct Test2 {
    			int x;
    			int y;
		} B;
 
		struct Test3 {
    			char a;
    			char b;
    			char c;
    			int d;
		} C;
 
			printf("sizeof(A) = %ld\n", sizeof(A));
    			printf("sizeof(B) = %ld\n", sizeof(B));
    			printf("sizeof(C) = %ld\n", sizeof(C));
 
    		
		
              }
	break;
	
	default:printf("Ошибка ввода\n");
	break;
	}
	return 0;

	}


