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
   employee e1;
   float f, net_salary;
   clrscr();
   f /= 65.765;

   gotoxy(10,10);
   printf("ID: ");
   scanf("%d",&e1.ID);
   flushall();

   gotoxy(10,13);
   printf("Age: ");
   scanf("%d",&e1.age);
   flushall();

   gotoxy(10,16);
   printf("Salary: ");
   scanf("%f",&e1.salary);
   flushall();

   gotoxy(25,10);
   printf("Deduction: ");
   scanf("%f",&e1.deduction);
   flushall();

   gotoxy(25,13);
   printf("Bounce: ");
   scanf("%f",&e1.bounce);
   flushall();

   gotoxy(25,16);
   printf("Name: ");
   scanf("%s",&e1.name);
   flushall();
   net_salary = e1.salary+e1.bounce-e1.deduction;
   gotoxy(10,19);
   printf("ID: %d",e1.ID);
   gotoxy(10,22);
   printf("Age: %d",e1.age);
   gotoxy(25,19);
   printf("Net salary: %f",net_salary);
   gotoxy(25,22);
   printf("Name: %s",e1.name);
   getch();
}