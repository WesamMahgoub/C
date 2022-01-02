#include <stdio.h>
#include <conio.h>


void main()
{
 char ch,E;
 clrscr();
 while(1)
 {
 gotoxy(8,8);
 printf("1.choice1");
 gotoxy(9,9);
 printf("2.choice2");
 gotoxy(10,10);
 printf("3.choice3");
 printf("\n\n\nplease,enter a 1 ,2 or 3");
 ch = getch();
 if(ch == '1')
 {
 clrscr();
 gotoxy(10,10);
 printf("Screen1");
 printf("\n\n\nenter any key to exit:");
 getch();
 continue;
 }
 else if(ch == '2')
 {
 clrscr();
 gotoxy(10,10);
 printf("Screen2");
 printf("\n\n\nenter any key to exit:");
 getch();
 continue;
 }
 else if(ch == '3')
 {
 clrscr();
 gotoxy(10,10);
 printf("Screen3");
 printf("\n\n\nenter any key to exit:");
 getch();
 continue;
 }
 }
}