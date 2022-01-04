#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i = 0,n = 0,rem = 0;
    scanf("%d",&num);
    n = (5/2);
    for(i = 0;i < num;i++)
    {
        rem += n;
        n *= 3;
        n = (n/2);
    }
    printf("%d",rem);
    return 0;
}
