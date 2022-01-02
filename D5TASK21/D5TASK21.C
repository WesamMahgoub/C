#include <stdio.h>
#include <conio.h>

int array[10] = {1,1,0,0,0,0,0,0,0,0};
int fib (int);
void fibf(int);

void main()
{
   clrscr();
   printf("%d\n",fib(10));
   fibf(10);
   getch();
}

int fib(int i)
{
   if(i==1 || i==2)
   {
	  return 1;
   }
   return fib(i-1)+fib(i-2);
}

void fibf(int j)
{
   int i;
   printf("%d\n%d\n",array[0],array[1]);
   for(i=2;i<j;i++)
   {
	  array[i] = array[i-2]+array[i-1];
	  printf("%d\t\n",array[i]);
   }
}