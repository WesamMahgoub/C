#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* height,max = 0,n,k,i;
    scanf("%d%d",&n,&k);
    height = (int*)malloc(sizeof(int)*n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&height[i]);
        if(height[i] > max)
            max = height[i];
    }
    if(max-k > 0)
        printf("%d",max-k);
    else
        printf("0");
    return 0;
}
