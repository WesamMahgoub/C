#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct stack
{
  int size,tos;
  int* stk;
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

  clrscr();
  initstack(&s1,10);
  printf("%d\n%d\n%d\n",isfullstack(s1),isemptystack(s1),peek(s1,&var));
  push(&s1,8);
  push(&s1,9);
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
  st->stk = (int*)malloc(s*sizeof(int));
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

int peek(stack s,int* data)
{
  if(isemptystack(s))
	return 0;

  *data = s.stk[s.tos-1];
  return 1;
}

int push(stack* s,int data)
{
  if(isfullstack(*s))
	return 0;

  s->stk[s->tos] = data;
  s->tos++;
  return 1;
}

int pop(stack* s,int* data)
{
  if(isemptystack(*s))
	return 0;

  *data = s->stk[--(s->tos)];
  return 1;
}