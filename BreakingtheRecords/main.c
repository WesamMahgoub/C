#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* arr,i,size = 0,max = 0,min = 0,maxcount = 0,mincount = 0;
    scanf("%d",&size);
    arr = (int*)malloc(size*sizeof(int));
    scanf("%d",&arr[0]);
        max = arr[0];
        min = arr[0];
    for(i = 1;i < size;i++)
    {
        scanf("%d",&arr[i]);
            if(arr[i] > max)
            {
                max = arr[i];
                maxcount++;

            }
            if(arr[i] < min)
            {
                min = arr[i];
                mincount++;
            }
    }
    printf("%d %d",maxcount,mincount);
    return 0;
}
