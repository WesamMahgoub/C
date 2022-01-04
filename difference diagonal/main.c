#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,sum1=0,sum2=0,** arr;
    scanf("%d",&size);

    arr = (int**)malloc(size*sizeof(int*));
    for(int k=0;k < size;k++)
    {
        arr[k] = (int*)malloc(size*sizeof(int));
    }

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i == j)
                sum1 += arr[i][j];
            if((i+j) == (size-1))
                sum2 += arr[i][j];
        }
    }
    printf("%d", abs(sum1-sum2));
    return 0;
}
