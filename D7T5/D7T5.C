#include <stdio.h>
#include <conio.h>

typedef struct complex
{

  float real;
  float image;

}complex;

int linear_search(complex*,int,float,float);

void main()
{
  complex arr[5] = {{0.0,10.45},{9.34,3.54},{5.56,7.23},{8.67,2.65},{5.23,1.89}};
  clrscr();
  printf("%d", linear_search(arr,5,9.34,3.54));
  getch();
}

int linear_search(complex* array,int size,float real,float image)
{
  int i;
  for(i=0;i<size;i++)
  {
	if(array[i].real == real)
	{
	  if(array[i].image == image)
		return i;
	}
  }
  return -1;
}