#include <stdio.h>
#include <conio.h>

void bubblesort(int* arr,int size);

void main()
{
  int i,array_of_int[10] = {10,5,7,3,2,8,9,11,7,4};

  clrscr();

  bubblesort(array_of_int,10);

  for(i=0;i<10;i++)
  {
	printf("%d\n",array_of_int[i]);
  }

  getch();
}

void bubblesort(int* arr,int size)
{
  int i,temp,sorted=0,j=0;

  while(!sorted)
  {
	sorted = 1;
	for(i=0;i<size-j;i++)
	{
	  if(arr[i] > arr[i+1]
	  {
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
		sorted = 0;
	  }
	}
	j++;
  }
}