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

typedef struct queue
{
  int size,rear;
  list* que;

}queue;

list initqueue(queue* q,int s);
int ifullqueue(queue q);
int isemptyqueue(queue q);
int input(queue* q,int data);
int output(queue* q,int* data);


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

void main()
{
  queue q1;
  int var;
  list l1;
  node* n1,*n2,*n3,*n4,*n5,*testnode;
  q1.que->start = NULL;
  q1.que->end = NULL;

 /* n1 = createnode();
  n2 = createnode();
  n3 = createnode();
  n4 = createnode();
  n5 = createnode();

  n1->data = 10;
  n2->data = 5;
  n3->data = 7;
  n4->data = 9;
  n5->data = 12;   */

  //testnode = l1.start;

  clrscr();
 /* insert(&l1,n1);
  insert(&l1,n2);
  insert(&l1,n3);
//insert(&l1,n4);
  insert(&l1,n5);
  printf("%d\n",search(l1,n3->data)->data);
  printf("%d\n",delete(&l1,n4->data));
  insert(&l1,n4);
  printf("%d\n",delete(&l1,n4->data));

  testnode = l1.start;

  while(testnode)
  {
	printf("%d\n",testnode->data);
	testnode = testnode->next;
  }
						 */

//  initqueue(&q1,10);

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

list initqueue(queue* q,int s)
{
  int i;
  q->size = s;
  q->rear = 0;
  q->que = (list*)malloc(s*sizeof(node));

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

int input(queue* q,int d)
{
  node* n;
  n = createnode();
  n->data = d;

  if(isfullqueue(*q))
	return 0;

  insert(q->que,n);
  q->rear++;

  return 1;
}

int output(queue* q,int* d)
{
  int i;

  if(isemptyqueue(*q))
	return 0;

  *d = q->que->start->data;

  delete(q->que,q->que->start->data);

  q->rear--;
  return 1;
}