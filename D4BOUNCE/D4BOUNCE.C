#include <stdio.h>
#include <conio.h>

#define Up           0x48
#define Down         0x50
#define Home         0x47
#define End          0x4f
#define Enter        0xD
#define Escape       0x1B
#define Normal_Attr  0x07
#define Hilight_Attr 0x70
#define New          0
#define Display      1
#define Exit         2

typedef struct employee
{
int ID;
int age;
float salary;
float deduction;
float bounce;
char name[20];
}employee;

char menu[3][10] = {"New      ","Display  ","Exit     "};
int i, pos=0, ch, terminate;

void main()
{
  employee e[5];
   float f, net_salary[5];
   f /= 65.765;

do{

textbackground(BLACK);
clrscr();

	 for(i=0;i<3;i++)
	 {
		 gotoxy(20,10+i);
		 if(i != pos)
		 {
		   textattr(0x07);
		 }
		 else if(i == pos)
		 {
			textattr(0xf0);
		 }
		 cprintf("%s",menu[i]);
	 }

ch = getch();

switch(ch)
{
case NULL:

ch = getch();

switch(ch)
	 {
	   case Up:
	   pos--;
	   if(pos < 0)
	   pos = 2;
	   break;
	   case Down:
	   pos++;
	   if(pos > 2)
	   pos = 0;
	   break;
	   case Home:
	   pos = 0;
	   break;
	   case End:
	   pos = 2;
	   break;
	 }
	 break;
	 case Enter:
	 switch(pos)
	   {
	   case New:
	   clrscr();
	   gotoxy(25,15);
	   printf("A new window");
	   getch();
	   clrscr();
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
	   getch();
	   break;
	   case Display:
	   clrscr();
	   gotoxy(25,15);
	   printf("A display window");
	   getch();
		clrscr();
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
	   getch();
	   break;
	   case Exit:
	   terminate = 1;
	   break;
	   }
	 break;
	 case Escape:
	 terminate = 1;
	 break;
	 }

   }while(!terminate);
}