#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
  char array[] = "wesam";
  char arr[] = "Wesam";
  clrscr();
  printf("%d",strcmpi(array,arr));
  getch();
}