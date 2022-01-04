#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,t,a,b,m,n,i,j,appcount = 0,orangcount = 0;
    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    int* apples = (int*)malloc(m*sizeof(int));
    int* oranges = (int*)malloc(n*sizeof(int));
    for(i = 0;i < m;i++)
    {
        scanf("%d",apples+i);
        *(apples+i) = a + *(apples+i);
        if(*(apples+i) >= s && *(apples+i) <= t)
            appcount++;
    }
    for(j = 0;j < n;j++)
    {
        scanf("%d",oranges+j);
        *(oranges+j) = b + *(oranges+j);
        if(*(oranges+j) >= s && *(oranges+j) <= t)
            orangcount++;
    }
    printf("%d\n%d\n",appcount,orangcount);
    return 0;
}
