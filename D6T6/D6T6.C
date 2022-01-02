#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
   int size1,size2,count,i,*totalsize;
   char** str;

   clrscr();

   printf("please,enter the number of strings");
   scanf("%d",&size1);

   str = (char**) malloc(size1*sizeof(char*));
   printf("%d\n",sizeof(str));

   totalsize = (int*) malloc(size1*sizeof(int));

   for(count=0;count<size1;count++)
   {
	 printf("please enter the string size ");
	 scanf("%d",&size2);
	 totalsize[count] = size2;
	 printf("%d",totalsize[count]);

	 str[count] = (char*) malloc(size2*sizeof(char));

	 str[count][size2-1]='\0';
	 printf("%c",str[count][size2]);

   }
   for(count=0;count<size1;count++)
   {
	 for(i=0;str[count][totalsize[count]] != '\0';i++ )
	 {
		scanf("%c",&str[count][i]);
	 }
	 printf("\n");
	 //getch();
   }
   for(count=0;count<=size1;count++)
   {
	 puts(str[count]);
   }
   getch();
}

