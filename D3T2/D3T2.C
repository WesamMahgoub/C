#include <stdio.h>
#include <conio.h>

void main()
{
int i, set_of_num[10]={1,5,8,0,2,4,6,7,9,7}, min=set_of_num[0], max=set_of_num[0];
clrscr();
for(i=0;i<10;i++)
{
if(set_of_num[i]<=min)
{
min = set_of_num[i];
}
if(set_of_num[i]>=max)
max = set_of_num[i];
}
printf("The max num is : %d\nThe min num is : %d", max, min);
getch();
}