#include <stdio.h>
#include <conio.h>

void main()
{
int col,row,size,i;
clrscr();
printf("please,enter the size:");
scanf("%d",&size);
for(i=1;i<=size*size;i++)
{
if(i == 1)
{
row = 1;
col = (size+1)/2;
}
else if((i-1)%size == 0)
{
row++;
}
else
{
row--;
col--;
if(row == 0)
row = size;
if(col == 0)
col = size;
}
clrscr();
gotoxy(col,row);
printf("%d",i);
}
getch();
}