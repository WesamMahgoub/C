#include <stdio.h>
#include <conio.h>

void main()
{
 int i,j;
 clrscr();
 for(i=10;i>=1;i--)
 {
 printf("      %d",i);
 }
 printf("\n");
 for(i=10;i>=1;i--)
 {
 printf("******");
 }
 for(i=10;i>=1;i--)
 {
 printf("\n%d  *   ",i);
 for(j=10;j>=1;j--)
 {
 printf("%d     ",i*j);
 }
 }
 getch();
 }