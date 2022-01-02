#include <stdio.h>
#include <conio.h>

int binary_search(int*,int,int);

void main()
{
  int arr[10] = {0,2,4,5,7,8,9,12,17,19};
  clrscr();
  printf("%d", binary_search(arr,10,7));
  getch();
}

int binary_search(int* array,int size,int data)
{
  int lo=0, hi=size-1, mid;
  //mid = (lo+hi)/2;

  while(hi >= lo)
  {
	mid = (hi+lo)/2;

	if(array[mid] > data)
	  hi = mid-1;
	else if(array[mid] < data)
	  lo = mid +1;
	else
	  return mid;
  }
  return -1;
}