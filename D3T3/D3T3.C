#include <stdio.h>
#include <conio.h>

void main()
{
int i, j, sum=0,temp[4]={0}, set_of_num[3][4]={0};
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
gotoxy(j*5+20,i+10);
scanf("%d", &set_of_num[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
sum += set_of_num[i][j];
if(j==0)
temp[0]+=set_of_num[i][j];
if(j==1)
temp[1]+=set_of_num[i][j];
if(j==2)
temp[2]+=set_of_num[i][j];
if(j==3)
temp[3]+=set_of_num[i][j];
}
gotoxy(j*5+20,i+10);
printf("%d",sum);
sum=0;
}
gotoxy(20,13);
printf("%f",temp[0]/4.0);
gotoxy(25,13);
printf("%f",temp[1]/4.0);
gotoxy(30,13);
printf("%f",temp[2]/4.0);
gotoxy(35,13);
printf("%f",temp[3]/4.0);
getch();
}