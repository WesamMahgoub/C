#include <stdio.h>
#include <conio.h>

int linear_search(int*,int,int);

void main()
{
  int arr[10] = {0,10,9,3,5,7,8,2,5,1};
  clrscr();
  printf("%d", linear_search(arr,10,7));
  getch();
}

int linear_search(int* array,int size,int data)
{
  int i;
  for(i=0;i<size;i++)
  {
	if(array[i] == data)
	{
	  return i;
	}
  }
  return -1;
}