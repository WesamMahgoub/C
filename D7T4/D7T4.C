#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct employee
{
  int ID;
  //int age;
  //float salary;
//  float deduction;
  //float bounce;
  char name[20];
}employee;

int linear_search_code(employee*,int,int);
int linear_search_name(employee*,int,char*);

void main()
{
  employee arr[5] = {{0,"ahmad"},{10,"sara"},{40,"yasmin"},{50,"wesam"},{23,"reham"}};

  clrscr();
  //char array_name[] = "wesam";

  printf("%d\n", linear_search_code(arr,5,10));
  printf("%d\n", linear_search_name(arr,5,"wesam"));
  getch();
}

int linear_search_code(employee* array,int size,int data)
{
  int i;
  for(i=0;i<size;i++)
  {
	if(array[i].ID == data)
	{
	  return i;
	}
  }
  return -1;
}

int linear_search_name(employee* array,int size,char* name)
{
  int i, j=0, len1=0, len2=0;
  len1 = strlen(name);

  for(i=0;i<size;i++)
  {
	len2 = strlen(array[i].name);
	if(len2 == len1)
	{

	  for(;j<len1;j++)
	  {
		if(array[i].name[j] != name[j])
		  break;
	  }
	}
	if(j==len1)
	  return i;

  }
  return -1;
}