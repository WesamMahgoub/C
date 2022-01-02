#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct employee
{
  int ID;
  int age;
  float salary;
  float deduction;
  float bounce;
  char name[20];
}employee;

void get_data(employee*);
void print_data(employee*);

static void forcefloat(float* p)
{
  float f = *p;
}

float f,*a;
int r=1,w=0;

void main()
{

  int size,count;
  employee *array_of_employee;

  clrscr();
  forcefloat(a);
  f /= 65.765;
  printf("Please,Enter the number of employees: ");
  scanf("%d",&size);
  array_of_employee = (employee*) malloc(size*36);

  for(count=0;count<size;count++)
  {
	clrscr();
	get_data(array_of_employee+count);
  }
  for(count=0;count<size;count++)
  {
	clrscr();
	print_data(array_of_employee+count);
  }
  getch();

}

void get_data(employee* e)
{

  gotoxy(10,10);
  printf("ID: ");
  scanf("%d",&(e)->ID);
  fflush(stdin);

  gotoxy(10,13);
  printf("Age: ");
  scanf("%d",&(e)->age);
  fflush(stdin); 

  gotoxy(10,16);
  printf("Salary: ");
  scanf("%f",&(e)->salary);
  fflush(stdin);

  gotoxy(25,10);
  printf("Deduction: ");
  scanf("%f",&(*e).deduction);
  fflush(stdin);

  gotoxy(25,13);
  printf("Bounce: ");
  scanf("%f",&(*e).bounce);
  fflush(stdin);

  gotoxy(25,16);
  printf("Name: ");
  scanf("%s",&(*e).name);
  fflush(stdin);

}

void print_data(employee* e)
{

  gotoxy(1,r+w++);
  printf("ID: %d",(*e).ID);
  gotoxy(1,r+w++);
  printf("Age: %d",(*e).age);
  gotoxy(1,r+w++);
  printf("Net salary: %f",e->salary+(*e).bounce-(*e).deduction);
  gotoxy(1,r+w++);
  printf("Name: %s",(*e).name);
  printf("\n**************\n");
}