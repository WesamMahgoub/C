#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define Up           0x48
#define Down         0x50
#define Home         0x47
#define End          0x4f
#define Enter        0xD
#define Escape       0x1B
#define Normal_Attr  0x07
#define Hilight_Attr 0x70
#define Delete       4
#define Search       3
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

char menu[5][10] = {"New      ","Display  ","Exit     ","Search   ","Delete    "};
int i, pos=0, ch, terminate;

static void forcefloat(float* p)
{
  float f = *p;
}

typedef struct node
{

  employee e;
  struct node* next;
  struct node* prev;

}node;

typedef struct linkedlist
{

  node* start;
  node* end;

}list;

void get_data(list,node*);
void print_data(list);

node* createnode(void);
void insert(list*,node*);
int  delete(list*,int);
node* search(list l,int d);
void append(list*,node*);

void main()
{
  list l1;
  node *n1,*test;
  int var;
  l1.start = NULL;
  l1.end = NULL;

  clrscr();
  do{

	textbackground(BLACK);
	clrscr();

	for(i=0;i<5;i++)
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
		   pos = 4;
		 break;
		 case Down:
		 pos++;
		 if(pos > 4)
		   pos = 0;
		 break;
		 case Home:
		 pos = 0;
		 break;
		 case End:
		 pos = 4;
		 break;
	   }
	   break;
	   case Enter:
	   switch(pos)
	   {
		 case New:
		 clrscr();
		 n1 =  createnode();

		 printf("\nID: ");
		 scanf("%d",&(n1->e.ID));
		 flushall();

		 printf("\nAge: ");
		 scanf("%d",&(n1->e.age));
		 flushall();

		 printf("\nSalary: ");
		 scanf("%f",&(n1->e.salary));
		 flushall();

		 printf("\nDeduction: ");
		 scanf("%f",&(n1->e.deduction));
		 flushall();

		 printf("\nBounce: ");
		 scanf("%f",&(n1->e.bounce));
		 flushall();

		 printf("\nName: ");
		 scanf("%s",&(n1->e.name));
		 flushall();

		 insert(&l1,n1);
		 break;

		 case Display:
		 clrscr();
		 print_data(l1);
		 break;

		 case Exit:
		 terminate = 1;
		 break;

		 case Delete:
		 clrscr();
		 printf("please ener the ID number:");
		 scanf("%d",&var);
		 delete(&l1,var);
		 break;

		 case Search:
		 textbackground(BLACK);
		 clrscr();
		 printf("please ener the ID number:");
		 scanf("%d",&var);
		 test = search(l1,var);
		 printf("ID: %d\n",test->e.ID);
		 printf("Age: %d\n",test->e.age);
		 printf("Net salary: %f\n",test->e.salary+test->e.bounce-test->e.deduction);
		 printf("Name: %s\n",test->e.name);
		 getch();
		 break;
		}
		break;
		case Escape:
		terminate = 1;
		break;
	 }

  }while(!terminate);
  getch();
}
/////////////////////////////////////////
node* createnode(void)
{
  node* temp;

  temp = (node*) malloc(sizeof(node));

  if(temp == NULL)
	return NULL;

  temp->prev = NULL;
  temp->next = NULL;

  return temp;
}
///////////////////////////////////////
void append(list* l,node* element)
{
  if(l->start == NULL)
  {
	l->start = element;
	l->end = element;
  }
  else
  {
	element->prev = l->end;
	l->end->next = element;
	l->end = element;
  }
}
///////////////////////////////////
node* search(list l,int d)
{
  node* temp = l.start;

  if(temp == NULL)
	return NULL;

  while(temp && temp->e.ID != d)
  {
	printf("\nhere");
	temp = temp->next;
  }
  return temp;
}
//////////////////////////////////
int delete(list* l,int key)
{
  node* temp;

  if(!l->start)
	return 0;

  temp = search(*l,key);

  if(!temp)
	return 0;

  if(l->start == temp && l->end == temp)
  {
	l->start = NULL;
	l->end = NULL;

	free(temp);
  }
  else
  {
	if(l->start == temp)
	{
	  l->start = l->start->next;
	  l->start->prev = NULL;

	  free(temp);
	}
	else if(l->end == temp)
	{
	  l->end = l->end->prev;
	  l->end->next = NULL;

	  free(temp);
	}
	else
	{
	  temp->prev->next = temp->next;
	  temp->next->prev = temp->prev;

	  free(temp);
	}
  }
  return 1;
}
//////////////////////////////////////////
void insert(list* l,node* element)
{
  node* temp = l->start;

  while(temp && (temp->e.ID < element->e.ID))
	temp = temp->next;

  if(!temp)
	append(l,element);

  else
  {
	if(l->start == temp)
	{
	  l->start->prev = element;
	  element->next = l->start;
	  l->start = element;
	}
	else
	{
	  temp->prev->next = element;
	  element->prev = temp->prev;
	  temp->prev = element;
	  element->next = temp;
	}

  }
}

void get_data(list l,node* n1)
{
  n1 =  createnode();

  gotoxy(10,10);
  printf("ID: ");
  scanf("%d",n1->e.ID);
  flushall();

  gotoxy(10,13);
  printf("Age: ");
  scanf("%d",n1->e.age);
  flushall();

  gotoxy(10,16);
  printf("Salary: ");
  scanf("%f",n1->e.salary);
  flushall();

  gotoxy(25,10);
  printf("Deduction: ");
  scanf("%f",n1->e.deduction);
  flushall();

  gotoxy(25,13);
  printf("Bounce: ");
  scanf("%f",n1->e.bounce);
  flushall();

  gotoxy(25,16);
  printf("Name: ");
  scanf("%s",n1->e.name);
  flushall();

  insert(&l,n1);

}
void print_data(list l)
{
  node* testnode = l.start;

  while(testnode)
  {

	printf("ID: %d\n",testnode->e.ID);
	printf("Age: %d\n",testnode->e.age);
	printf("Net salary: %f\n",testnode->e.salary+testnode->e.bounce-testnode->e.deduction);
	printf("Name: %s\n",testnode->e.name);
	printf("\n**************\n");

	testnode = testnode->next;
  }
  getch();
}