//Домашнее задание №10 Крестики-нолики

#include <iostream>
//#include <conio.h>
#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <random>
#include <time.h>


using namespace std;
char name3[] = "КОМПЬЮТЕР";
char name1[30];
char name11[30];
char name2[30];
char table[3][3];
bool step;


void instruction()
	{
	cout << "***КРЕСТИКИ-НОЛИКИ***\n";
	cout << "Вид поля:\n\n";
        
        int l = 0;
	for(int i(0);i<3;i++)
	     {
  		for(int j(0);j<3;j++)
		   {
                     cout <<"|"<<l+1<<' '; 
		     table[i][j] = char(49+l); 
		     l++; 
                    }
	      cout <<'|';
              cout <<endl;  
              } 
	cout << "\n Для хода нажмите цифру ячейки поля\n";
	cout << "Для начала игры нажмите клавишу:";
	getchar();	
	//_getch();
         }



bool input()
	 {
	  for(int i(0);i<3;i++)
	     {
  		for(int j(0);j<3;j++)
		   {
                     cout <<"| "<<table[i][j]<<' ';   
                    }
                cout << '|';
		cout << endl;
              }
	 cout << endl;
	  if (step)
             cout << "Ходит " <<name1 <<" : ";
	  else cout << "Ходит " <<name2 <<" : ";

           int n;
	   cin >> n;
	   if (n<1 || n>9)
	             return false;
           int i,j;

	 if (n%3 == 0)
           {
	     i = n/3-1;
	     j = 2;
	   }
	 else 
	   {
	     j = n%3-1;
	     i = n/3;
	   }

         if (table[i][j] =='0' || table[i][j] =='X')
		return false;

	 if (step) 
	 {
	  table[i][j]='X';
	  step = false;
	  }
         else {table[i][j] = '0'; step = true;}
         return true;  
	}	  



bool input1()
	 {
	  for(int i(0);i<3;i++)
	     {
  		for(int j(0);j<3;j++)
		   {
                     cout <<"| "<<table[i][j]<<' ';   
                    }
                cout << '|';
		cout << endl;
              }
	 cout << endl;
          int n; 
          srand(time(NULL));
	  if (step)
             {cout << "Ходит " <<name11 <<" : ";
	      cin >> n;}
	  else { cout << "Ходит " <<name3 <<" : ";
		n=rand()%9+1;
                cout <<n<< endl;
		}

           //int n;
	   //cin >> n;
	   if (n<1 || n>9)
	             return false;
           int i,j;

	 if (n%3 == 0)
           {
	     i = n/3-1;
	     j = 2;
	   }
	 else 
	   {
	     j = n%3-1;
	     i = n/3;
	   }

         if (table[i][j] =='0' || table[i][j] =='X')
		return false;

	 if (step) 
	 {
	  table[i][j]='X';
	  step = false;
	  }
         else {table[i][j] = '0'; step = true;}
         return true;  
	}	  


bool win()

         {
	  for (int i(0);i<3;i++)
             if ((table[i][0] == table[i][1]) && (table[i][0] == table[i][2]))
                 return true;
	      else 
	          if ((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
                       return true;
 		  else if ((table[0][0] == table[1][1]) && (table[0][0] == table[2][2]) || (table[0][2] == table[1][1]) && (table[0][2] == table[2][0]))
                 return true;
				
	return false;




}





int main()
	{
	 setlocale(LC_ALL, "rus");
	 instruction();
	 system("clear");
	cout <<"Выберите режим игры:\n 1. Два игрока. \n 2. Один игрок.\n";
	int c;
	int i = 0; 
        cin >>c;
switch (c)
{
 case 1:
        {
	cout <<endl;
	cout <<"Введи имя первого игрока:";
	cin >> name1;
	cout <<"Введи имя второго игрока:";
	cin >> name2;


	srand(time(NULL));
	if (rand() & 1)
		step = true;
	else 
		step = false;

	while(!win())
	{
	 if (i == 9)

		{
		 cout <<"НИЧЬЯ!!!\n";
	   	 getchar();
		 return -1 ;
		}
	 system("clear");
	 if(!input())
	  {
		cout <<"\nВы ввели неверные данные, повотрите ввод!\n";
		getchar();	//_getch();
	  }
	i++;
	}

        system("clear");
        if (step)
		cout << "Победил "<<name2 << endl;
	else
		cout << "Победил "<<name1 << endl;

	getchar();	//_getch();
        break;
        }
case 2:
 {
	cout <<endl;
	cout <<"Введи имя игрока:";
	cin >> name11;
	//cout <<name3;
        system("clear");
	srand(time(NULL));
	if (rand() & 1)
		step = true;
	else 
		step = false;

	while(!win())
	{
	 if (i == 9)

		{
		 cout <<"НИЧЬЯ!!!\n";
	   	 getchar();
		 return -1 ;
		}
	 system("clear");
	i++;
	 if(!input1())
	  {
		cout <<"\nВы ввели неверные данные, повотрите ввод!\n";
		i--;
		getchar();	//_getch();
	  }
	
	}

        system("clear");
        if (step)
		cout << "Победил "<<name3 << endl;
	else
		cout << "Победил "<<name11 << endl;

	getchar();	//_getch();
break;
}
default: printf("Ошибка ввода\n");
break;
}
	return 0;
}
