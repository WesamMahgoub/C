#include <stdio.h>
#include <conio.h>

int binary_search(char* , char);

void main()
{
  char arr[] = "abcdef";
  clrscr();
  printf("%d", binary_search(arr,'d'));
  getch();
}

int binary_search(char* array,char data)
{
  int i=0, lo=0, hi, mid;
  while(array[i] != NULL)
  {
	i++;
  }
  hi = i-1;
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