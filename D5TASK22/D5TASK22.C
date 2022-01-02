#include <stdio.h>
#include <conio.h>

int fact(int n);
int factf(int);

void main()
{
   int n;
   clrscr();
   gotoxy(10,10);
   printf("enter an number:");
   scanf("%d",&n);
   gotoxy(10,11);
   printf("%d\n",fact(n));
   gotoxy(10,12);
   printf("%d\n",factf(n));
   getch();
}

int fact(int n)
{
   if(n==1)
	  return 1;

   return n*fact(n-1);
}
int factf(int n)
{
   int i, result = 1;

   for(i=n;i>1;i--)
   {
	  result *= i;
   }
   return result;
}