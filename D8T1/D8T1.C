#include <stdio.h>
#include <conio.h>

void SelectionSort(int*,int);
void swap(int* a,int* b);

void main()
{
  int i,array_of_int[10] = {10,5,7,3,2,8,9,11,7,4};

  clrscr();

  SelectionSort(array_of_int,10);

  for(i=0;i<10;i++)
  {
	printf("%d\n",array_of_int[i]);
  }

  getch();
}

void SelectionSort(int* arr,int size)
{
int i,j,temp,index = 0;

  for(i=0;i<size-1;i++,index=i)
  {
	for(j=i+1;j<size;j++)
	{
	  if(arr[j]<arr[index])
	  {
	  index = j;
	  }
	}
	swap(&arr[index],&arr[i]);
  }
}

void swap(int* a,int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}