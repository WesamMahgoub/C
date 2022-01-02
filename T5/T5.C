#include <stdio.h>
#include <conio.h>

void main()
{
 int i,j;
 clrscr();
 for(i=1;i<=10;i++)
 {
 printf("      %d",i);
 }
 printf("\n");
 for(i=1;i<=10;i++)
 {
 printf("******");
 }
 for(i=1;i<=10;i++)
 {
 printf("\n%d  *   ",i);
 for(j=1;j<=10;j++)
 {
 printf("%d     ",i*j);
 }
 }
 getch();
 }