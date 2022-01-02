#include <stdio.h>
#include <conio.h>

void swap(int* ,int* );

void main()
{
   int a=0,b=10;
   clrscr();
   swap(&a,&b);
   printf("%d\n%d\n",a,b);
   getch();
}

void swap(int* A,int* B)
{

   int* temp;
   *temp = *A;
   *A = *B;
   *B = *temp;

}