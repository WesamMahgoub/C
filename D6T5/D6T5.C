#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
   int size1,size2,count,i,*array;
   char** str;
   clrscr();
   printf("please,enter the number of strings");
   scanf("%d",&size1);

   array = (int*) malloc(size1*sizeof(int));

   str = (char**) malloc(size1*sizeof(char*));

   for(count=0;count<size1;count++)
   {

	 printf("please enter the string size");
	 scanf("%d",&size2);
	 array[count] = size2;
	 str[count] = (char*) malloc(size2*sizeof(char));

   }
   for(count=0;count<size1;count++)
   {
	 for(i=0;i<array[count];i++)
	 {
	   printf("\n");
	  str[count][i]= getche();
	 }
	  str[count][i]='\0';
   }

   for(count=0;count<=size1;count++)
   {
	 printf("\n%s",str[count]);
   }
   getch();
}

