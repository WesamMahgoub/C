#include <stdio.h>
#include <conio.h>

#pragma pack(1)

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

char menu[3][10] = {"New      ","Display  ","Exit     "};
int k=0, l=0, i, pos=0, ch, terminate;
float net_salary[10];

typedef struct employee
{
  int ID;
  int age;
  float salary;
  float deduction;
  float bounce;
  char name[20];
}employee;

employee e[10];

employee get_data(int);
void print_data(int);

void main()
{

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
		 printf("please enter your employee number:");
		 scanf("%d",&k);
		 get_data(k);
		 break;
		 case Display:
		 clrscr();
		 gotoxy(25,15);
		 printf("please enter your employee number:");
		 scanf("%d",&l);
		 print_data(l);
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


employee get_data(int k)
{

  float f;
  clrscr();
  f /= 65.765;

  gotoxy(10,10);
  printf("ID: ");
  scanf("%d",&e[k].ID);
  flushall();

  gotoxy(10,13);
  printf("Age: ");
  scanf("%d",&e[k].age);
  flushall();

  gotoxy(10,16);
  printf("Salary: ");
  scanf("%f",&e[k].salary);
  flushall();

  gotoxy(25,10);
  printf("Deduction: ");
  scanf("%f",&e[k].deduction);
  flushall();

  gotoxy(25,13);
  printf("Bounce: ");
  scanf("%f",&e[k].bounce);
  flushall();

  gotoxy(25,16);
  printf("Name: ");
  scanf("%s",&e[k].name);
  flushall();
  return e[k];

}
void print_data(int l)
{
   //float net_salary;
  net_salary[l] = e[l].salary+e[l].bounce-e[l].deduction;
  gotoxy(10,19);
  printf("ID: %d",e[l].ID);
  gotoxy(10,22);
  printf("Age: %d",e[l].age);
  gotoxy(25,19);
  printf("Net salary: %f",net_salary[l]);
  gotoxy(25,22);
  printf("Name: %s",e[l].name);
  getch();
}