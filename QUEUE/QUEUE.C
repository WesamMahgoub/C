#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct queue
{
  int size,rear;
  int* que;

}queue;

int initqueue(queue* q,int s);
int ifullqueue(queue q);
int isemptyqueue(queue q);
int input(queue* q,int data);
int output(queue* q,int* data);

void main()
{
  queue q1;
  int var;
  initqueue(&q1,10);

  clrscr();

  input(&q1,10);
  input(&q1,112);
  input(&q1,18);
  input(&q1,0);
  output(&q1,&var);
  printf("%d\n",var);
  output(&q1,&var);
  printf("%d\n",var);
  output(&q1,&var);
  printf("%d\n",var);
  output(&q1,&var);
  printf("%d\n",var);

  getch();
}

int initqueue(queue* q,int s)
{
  q->size = s;
  q->rear = 0;
  q->que = (int*)malloc(s*sizeof(int));

  return *q->que;
}

int isfullqueue(queue q)
{
  return q.rear == q.size;
}

int isemptyqueue(queue q)
{
  return q.rear == 0;
}

int input(queue* q,int data)
{
  if(isfullqueue(*q))
	return 0;

  q->que[q->rear++] = data;
  return 1;
}

int output(queue* q,int* data)
{
  int i;

  if(isemptyqueue(*q))
	return 0;

  *data = q->que[0];

  for(i=0;i<q->rear;i++)
	q->que[i] = q->que[i+1];

  q->rear--;
  return 1;
}