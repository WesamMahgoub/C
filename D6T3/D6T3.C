#include <stdio.h>
#include <conio.h>

int sting_length(char* str);
void string_copy(char*,char*,int,int);

void main()
{
   int count1,count2;
   char old_str[] = "wesam mahgoub", new_str[] = "employee name";
   clrscr();
   count1 = sting_length(old_str);
   count2 = sting_length(new_str);
   //printf("%d\n%d\n",count1,count2);
   string_copy(old_str,new_str,count1,count2);
   getch();
}

int sting_length(char* str)
{
   int i=0;
   for(;str[i]!=NULL;i++);
   return i;
}

void string_copy(char* str1,char* str2,int size1,int size2)
{
   int i;
   if(size1 <= size2)
   {
	 for(i=0;i <= size1;i++)
	 {
	   str2[i] = str1[i];
	 //printf("%s",str2);
	 }
	 printf("%s",str2);
   }
   else
   {
	 printf("The size of the string is too long");
   }
}