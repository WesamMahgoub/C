#include <stdio.h>
#include <conio.h>
#include <string.h>

void SelectionSort(char[][10],int);
void swap(char* a,char* b);

void main()
{
  char array_of_strings[5][10] = {"wesam","alaa","nada","eman","rania"};
  int i;

  clrscr();

  SelectionSort(array_of_strings,5);

  for(i=0;i<5;i++)
  {
	printf("%s\n",array_of_strings[i]);
  }

  getch();
}

void SelectionSort(char arr[][10],int size)
{
  int i,j,index = 0;
  char temp[10];

  for(i=0;i<size-1;i++,index=i)
  {
	for(j=i+1;j<size;j++)
	{
	  if(strcmp(arr[j],arr[index]) < 0)
	  {
	  index = j;
	 // printf("%d\n",j);
	  }
	}
	if(index != i)
	{
	  strcpy(temp,arr[i]);
	  strcpy(arr[i],arr[index]);
	  strcpy(arr[index],temp);
	}
  }
}