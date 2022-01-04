#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int arr[5];
    long long int sum1,sum2,sum3,sum4,sum5;
    for(int i=0;i<5;i++)
    {
    scanf("%lld",&arr[i]);
    }
    sum1 = arr[0] + arr[1] + arr[2] + arr[3];
    sum2 = arr[0] + arr[1] + arr[2] + arr[4];
    sum3 = arr[0] + arr[1] + arr[4] + arr[3];
    sum4 = arr[0] + arr[4] + arr[2] + arr[3];
    sum5 = arr[4] + arr[1] + arr[2] + arr[3];

    if((sum1 <= sum2) && (sum1 <= sum3) && (sum1 <= sum4) && (sum1 <= sum5))
    {
       printf("%lld ",sum1);
    }
    else if((sum2 <= sum1) && (sum2 <= sum3) && (sum2 <= sum4) && (sum2 <= sum5))
    {
       printf("%lld ",sum2);
    }
    else if((sum3 <= sum2) && (sum3 <= sum1) && (sum3 <= sum4) && (sum3 <= sum5))
    {
       printf("%lld ",sum3);
    }
    else if((sum4 <= sum2) && (sum4 <= sum3) && (sum4 <= sum1) && (sum4 <= sum5))
    {
       printf("%lld ",sum4);
    }
    else if((sum5 <= sum2) && (sum5 <= sum3) && (sum5 <= sum4) && (sum5 <= sum1))
    {
       printf("%lld ",sum5);
    }

    if((sum1 >= sum2) && (sum1 >= sum3) && (sum1 >= sum4) && (sum1 >= sum5))
    {
       printf("%lld ",sum1);
    }
    else if((sum2 >= sum1) && (sum2 >= sum3) && (sum2 >= sum4) && (sum2 >= sum5))
    {
       printf("%lld ",sum2);
    }
    else if((sum3 >= sum2) && (sum3 >= sum1) && (sum3 >= sum4) && (sum3 >= sum5))
    {
       printf("%lld ",sum3);
    }
    else if((sum4 >= sum2) && (sum4 >= sum3) && (sum4 >= sum1) && (sum4 >= sum5))
    {
       printf("%lld ",sum4);
    }
    else if((sum5 >= sum2) && (sum5 >= sum3) && (sum5 >= sum4) && (sum5 >= sum1))
    {
       printf("%lld ",sum5);
    }

    return 0;
}
