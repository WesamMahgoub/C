#include <stdio.h>
#include <conio.h>

#define Up           0x48
#define Down         0x50
#define Home         0x47
#define End          0x4f
#define Enter        0xD
#define Escape       0x1B
#define Normal_Attr  0x07
#define Hilight_Attr 0x70
#define New          0
#define Display      1
#define Exit         2

char menu[3][10] = {"New      ","Display  ","Exit     "};
int row, col, i, pos=0, ch, terminate;

void main()
{

do{

textbackground(BLACK);
clrscr();

	 for(i=0;i<3;i++)
	 {
		 gotoxy(20,10+i);
		 if(i != pos)
		 {
		   textattr(0x07);
		 }
		 else if(i == pos)
		 {
			textattr(0xf0);
		 }
		 cprintf("%s",menu[i]);
	 }

ch = getch();

switch(ch)
{
case NULL:

ch = getch();

switch(ch)
	 {
	   case Up:
	   pos--;
	   if(pos < 0)
	   pos = 2;
	   break;
	   case Down:
	   pos++;
	   if(pos > 2)
	   pos = 0;
	   break;
	   case Home:
	   pos = 0;
	   break;
	   case End:
	   pos = 2;
	   break;
	 }
	 break;
	 case Enter:
	 switch(pos)
	   {
	   case New:
	   clrscr();
	   gotoxy(25,15);
	   printf("A new window");
	   getch();
	   break;
	   case Display:
	   clrscr();
	   gotoxy(25,15);
	   printf("A display window");
	   getch();
	   break;
	   case Exit:
	   terminate = 1;
	   break;
	   }
	 break;
	 case Escape:
	 terminate = 1;
	 break;
	 }

   }while(!terminate);
}