#include <stdio.h>
#include <conio.h>

typedef struct complex
{

  float real;
  float image;

}complex;

int binary_search(complex*,int,float,float);

void main()
{
  complex arr[5] = {{0.0,10.45},{9.34,3.54},{5.56,7.23},{8.67,2.65},{5.23,1.89}};
  clrscr();
  printf("%d", binary_search(arr,5,9.34,3.54));
  getch();
}

int binary_search(complex* array,int size,float real,float image)
{
  int mid, high = size-1, low=0;

  while(high != low)
  {
	mid = (high-low)/2;

	if(array[mid].real > real)
	  high = mid-1;
	else if(array[mid].real < real)
	  low = mid+1;
	else
	{
	  if(array[mid].image == image)
		return mid;
	}
  }
  return -1;
}