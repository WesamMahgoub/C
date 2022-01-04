#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0,i,max = 0,*arr,count = 0;
    scanf("%d",&num);
    arr = (int*)malloc(num*sizeof(int));

    for(i = 0;i < num;i++)
    {
        scanf("%d",&arr[i]);
        if(max < arr[i])
        {
            max = arr[i];
            count = 0;
        }
        if(max == arr[i])
            count++;
    }

    printf("%d",count);
    return 0;
}
