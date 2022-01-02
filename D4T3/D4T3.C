#include <stdio.h>
#include <conio.h>

#pragma pack(1)

typedef struct employee
{
int ID;
int age;
float salary;
float deduction;
float bounce;
char name[20];
}employee;

void main()
{
   employee e[5];
   float f, net_salary[5];
   int i;
   clrscr();
   f /= 65.765;
   for(i=0;i<5;i++)
   {
   printf("employee%d",i+1);
   gotoxy(10,10);
   printf("ID: ");
   scanf("%d",&e[i].ID);
   flushall();

   gotoxy(10,13);
   printf("Age: ");
   scanf("%d",&e[i].age);
   flushall();

   gotoxy(10,16);
   printf("Salary: ");
   scanf("%f",&e[i].salary);
   flushall();

   gotoxy(25,10);
   printf("Deduction: ");
   scanf("%f",&e[i].deduction);
   flushall();

   gotoxy(25,13);
   printf("Bounce: ");
   scanf("%f",&e[i].bounce);
   flushall();

   gotoxy(25,16);
   printf("Name: ");
   scanf("%s",&e[i].name);
   flushall();
   net_salary[i] = e[i].salary+e[i].bounce-e[i].deduction;
   clrscr();
   }
   for(i=0;i<5;i++)
   {
   gotoxy(10,19);
   printf("ID%d: %d",i+1,e[i].ID);
   gotoxy(10,22);
   printf("Age%d: %d",i+1,e[i].age);
   gotoxy(25,19);
   printf("Net salary%d: %f",i+1,net_salary[i]);
   gotoxy(25,22);
   printf("Name%d: %s",i+1,e[i].name);
   getch();
   clrscr();
   }
}