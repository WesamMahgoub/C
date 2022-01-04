#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0,rem = 0;
    int i,j;
    int* arr;
    scanf("%d",&n);
    arr = (int*)malloc(n*sizeof(int));

    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%5 != 0)
        {
            rem = 5-(arr[i]%5);
            if(rem < 3 && arr[i] >= 38)
            {
                arr[i] += rem;
            }
        }
    }
    for(j = 0;j < n;j++)
    {
        printf("%d\n",arr[j]);
    }

    return 0;
}
