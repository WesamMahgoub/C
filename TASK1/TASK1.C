#include <stdio.h>
#include <conio.h>
void main()
{
int x = 3;
int r = -4;
char y = 'c';
float f = 13.087;
long l = 56.7890;
double d = 67.6878;

printf("%d\n%i\n",x,l);
printf("%c\n%F\n",y,l);
printf("%s\n%g\n","wesam");
printf("%x\n%G\n",x,d);
printf("%X\n",y);
printf("%f\n",f);
printf("%a\n",l);
printf("%A\n",d);
printf("%o\n",f);
printf("%p\n",r);
printf("%e\n",f);
printf("%u\n",r);

getch();
}
