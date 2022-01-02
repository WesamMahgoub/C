#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct node
{

  int data;
  struct node* next;
  struct node* prev;

}node;

typedef struct linkedlist
{

  node* start;
  node* end;

}list;

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

node* search(list l,int d)
{
  node* temp = l.start;

  if(temp == NULL)
	return NULL;

  while(temp && temp->data != d)
  {
	temp = temp->next;
  }
  return temp;
}

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

void insert(list* l,node* element)
{
  node* temp = l->start;

  while(temp && (temp->data < element->data))
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

typedef struct stack
{
  int size,tos;
  list* stk;
}stack;

int initstack(stack* st,int s);
int isfullstack(stack s);
int isemptystack(stack s);
int peek(stack s,int* data);
int push(stack* s,int data);
int pop(stack* s,int* data);

void main()
{
  stack s1;
  int var;
  node* n1,*n2,*n3,*n4,*n5,*testnode;
  s1.stk->start = NULL;
  s1.stk->end = NULL;

  clrscr();
//  initstack(&s1,10);
  printf("%d\n%d\n%d\n",isfullstack(s1),isemptystack(s1));//,peek(s1,&var));
  push(&s1,8);
  printf("%d\n%d\n%d\n",isfullstack(s1),isemptystack(s1));//,peek(s1,&var));
  push(&s1,9);
  printf("%d\n%d\n%d\n",isfullstack(s1),isemptystack(s1));//,peek(s1,&var));
  push(&s1,12);
  pop(&s1,&var);
  printf("%d\n",var);
  pop(&s1,&var);
  printf("%d\n",var);
  pop(&s1,&var);
  printf("%d\n",var);
  pop(&s1,&var);
  printf("%d\n",var);

  getch();
}

int initstack(stack* st,int s)
{
  st->size = s;
  st->tos = 0;
  st->stk = (list*)malloc(s*sizeof(node));
  if(st->stk != NULL)
	return 1;
  return 0;
}

int isfullstack(stack s)
{
  if(s.tos == s.size)
	return 1;
  return 0;
}

int isemptystack(stack s)
{
  return (s.tos == 0);
}

int peek(stack s,int* d)
{
  if(isemptystack(s))
	return 0;

  *d = s.stk->start->data;
  return 1;
}

int push(stack* s,int d)
{
  node* n;
  n = createnode();
  n->data = d;

  if(isfullstack(*s))
	return 0;

  insert(s->stk,n);
  s->tos++;
  return 1;
}

int pop(stack* s,int* d)
{
  if(isemptystack(*s))
	return 0;

  *d = s->stk->end->data;
  s->stk->end = s->stk->end->prev;
//  s->tos--;
  return 1;
}