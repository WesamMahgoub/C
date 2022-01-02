#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct employee
{
  int ID;
  char name[20];
}employee;

void swap(int* a,int* b);
void selectionsort_name(employee*,int);

void main()
{
  int i;
  employee arr[5] = {{0,"ahmad"},{10,"sara"},{40,"yasmin"},{50,"wesam"},{23,"reham"}};

  clrscr();

  selectionsort_name(arr,5);

  for(i=0;i<5;i++)
  {
	printf("%d %s\n",arr[i].ID,arr[i].name);
  }
  getch();
}

void selectionsort_name(employee* array,int size)
{
  int i,j,index = 0;
  char temp[10];

  for(i=0;i<size-1;i++,index=i)
  {
	for(j=i+1;j<size;j++)
	{
	  if(strcmp(array[j].name,array[index].name) < 0)
	  {
	  index = j;
	 // printf("%d\n",j);
	  }
	}
	if(index != i)
	{
	  strcpy(temp,array[i].name);
	  strcpy(array[i].name,array[index].name);
	  strcpy(array[index].name,temp);
	  swap(&array[index],&array[i]);
	}
  }
}

void swap(int* a,int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}