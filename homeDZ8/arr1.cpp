
//работающий метод пузырька

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//----------------пузырек-------------
void bubbleSort(int *num, int size)
{
  // Для всех элементов
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) // для всех элементов после i-ого
    {
      if (num[j - 1] > num[j]) // если текущий элемент меньше предыдущего
      {
        int temp = num[j - 1]; // меняем их местами
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}
 



//------------------вставки----------
void InsertionSort(int n, int mass[])
{
    int newElement, location;
 
    for (int i = 1; i < n; i++)
    {
        newElement = mass[i];
        location = i - 1;
        while(location >= 0 && mass[location] > newElement)
        {
            mass[location+1] = mass[location];
            location = location - 1;
        }
        mass[location+1] = newElement;
    }
}




int main()
	{

	int a[5000];
 	double time_arr_bubbleSort[10];
	double time_arr_InsertSort[10];
	double max_time = -1;
	double max_time1 = -1;
	double average;
	double average1;
	int sum = 0;
	int sum1 = 0;
	for (int j = 0; j< 10; j++)
	{
	srand(time(NULL));
	for (int i = 0; i < 5000; i++) 
 				 {
	  				
					a[i] = rand()%20;
    
 				 }
			/*for (int i = 0; i < 5000; i++) 
  				{
	  
					printf("a[%d] = %d\n", i, a[i]);
    
 				 }*/

	clock_t begin, end;
	double time_spent;
	begin = clock();
	
	bubbleSort(a,5000);

	
   	end = clock();

    	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    		
	time_arr_bubbleSort[j] = time_spent*100000;
	if  (time_arr_bubbleSort[j]>max_time)
		max_time = time_arr_bubbleSort[j];
	sum =sum+time_arr_bubbleSort[j];
	
	clock_t begin1, end1;
	double time_spent1;
	begin1 = clock();
 
	InsertionSort(5000, a);

	end1 = clock();
    	time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;

	time_arr_InsertSort[j] = time_spent1*100000;
   	if  (time_arr_InsertSort[j]>max_time1)
		max_time1 = time_arr_InsertSort[j];
	sum1 =sum1+time_arr_InsertSort[j];


	}
 	for (int j = 0;j<10;j++)
	      printf("time_arr_bubbleSort[%d] = %f\n ",j,time_arr_bubbleSort[j]);
	printf("-------------------------------------\n");
	for (int j = 0;j<10;j++)
	      printf("time_arr_InsertSort[%d] = %f\n",j,time_arr_InsertSort[j]);
	printf("-------------------------------------\n");
	printf("max_time = %f\n",max_time);
	printf("max_time1 = %f\n",max_time1);
	//printf("sum = %d\n",sum);
	average = sum/10;
	average1 = sum1/10;
	printf("average = %f\n",average);
	printf("average1 = %f\n",average1);
	
	
   	return 0;
	}
