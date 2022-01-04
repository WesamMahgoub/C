#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,acount = 0,bcount = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    if(a > d)
        acount++;
    else if(a < d)
        bcount++;
    if(b > e)
        acount++;
    else if(b < e)
        bcount++;
    if(c > f)
        acount++;
    else if(c < f)
        bcount++;
    printf("%d %d",acount,bcount);
    return 0;
}
