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

employee get_data();
void print_data(employee);

void main()
{
   employee e1;
   e1 = get_data();
   print_data(e1);
}

employee get_data()
{
   employee e;
   float f;
   clrscr();
   f /= 65.765;

   gotoxy(10,10);
   printf("ID: ");
   scanf("%d",&e.ID);
   flushall();

   gotoxy(10,13);
   printf("Age: ");
   scanf("%d",&e.age);
   flushall();

   gotoxy(10,16);
   printf("Salary: ");
   scanf("%f",&e.salary);
   flushall();

   gotoxy(25,10);
   printf("Deduction: ");
   scanf("%f",&e.deduction);
   flushall();

   gotoxy(25,13);
   printf("Bounce: ");
   scanf("%f",&e.bounce);
   flushall();

   gotoxy(25,16);
   printf("Name: ");
   scanf("%s",&e.name);
   flushall();
   return e;

}
void print_data(employee e)
{
   float net_salary;
   net_salary = e.salary+e.bounce-e.deduction;
   gotoxy(10,19);
   printf("ID: %d",e.ID);
   gotoxy(10,22);
   printf("Age: %d",e.age);
   gotoxy(25,19);
   printf("Net salary: %f",net_salary);
   gotoxy(25,22);
   printf("Name: %s",e.name);
   getch();
}