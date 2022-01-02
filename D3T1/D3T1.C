#include <stdio.h>
#include <conio.h>

void main()
{
int i, array[10] = {0};
for(i=0;i<10;i++)
{
printf("\npleas enter a number :");
scanf("%d",&array[i]);
}
for(i=0;i<10;i++)
{
printf("%d\n",array[i]);
}
getch();
}