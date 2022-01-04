#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* arr,n,k,bill,anna,i,sum = 0;
    scanf("%d%d",&n,&k);
    arr = (int*)malloc(sizeof(int)*n);
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
        if(i != k)
            sum += arr[i];
    }
    scanf("%d",&bill);
    sum /= 2;
    sum = bill - sum;
    if(sum > 0)
        printf("%d",sum);
    else
        printf("Bon Appetit");
    return 0;
}
