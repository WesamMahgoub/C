#include <stdio.h>
#include <conio.h>

void main()
{
int ch;
int sum = 0,i=0;
clrscr();
while(sum<=100)
{
printf("please enter a number");
scanf("%d",&ch);
sum += ch;
i++;
}
printf("the sum exceeds 100");
}