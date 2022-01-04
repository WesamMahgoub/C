#include <stdio.h>
#include <stdlib.h>

int sum(int,int);
int main()
{
    int x,y;
    printf("a = ");
    scanf("%d",&x);
    printf("b = ");
    scanf("%d",&y);
    printf("%d",sum(x,y));
   // getch();
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
