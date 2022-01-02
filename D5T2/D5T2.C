#include <stdio.h>
#include <conio.h>


int power_of_num(int,int);
int power_of_numf(int,int);

void main()
{
	 int n,p;
	 clrscr();
	 gotoxy(10,10);
	 scanf("%d",&n);
	 flushall();
	 gotoxy(10,11);
	 scanf("%d", &p);
	 gotoxy(15,10);
	 printf("%d", power_of_num(n,p));
	 gotoxy(15,11);
	 printf("%d", power_of_numf(n,p));
	 getch();
}

int power_of_num(int num, int power)
{
	 if(power == 1)
		 return num;

	 return num*power_of_num(num,power-1);
}

int power_of_numf(int n,int p)
{
	 int i=1,result=1;
	 for(;i<=p;i++)
	 {
		 result *= n;
		// printf("%d",result);
	 }
	 return result;
}