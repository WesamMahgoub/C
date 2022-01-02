#include <conio.h>
#include <stdio.h>

void main()
{
   int size1,size2,count;
   char* str;
   clrscr();
   printf("please,enter the number of strings");
   scanf("%d",&size1);
   str = (char*) malloc(size1*sizeof(char));
   for(count=0;count<size;count++)
   {
	 printf("please enter the string size");
	 scanf("%d",&size2);
	 str[count] = (char*) malloc(size2*sizeof(char));
   }

}