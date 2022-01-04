#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[11],com[9];
    int n = 0,i,j;
    scanf("%s",arr);

    if(arr[8] == 'P')
    {
        n = ((arr[0]-48)*10) + (arr[1]-48);
        if(n < 12)
           n += 12;
        arr[0] = n/10 + 48;
        arr[1] = n%10 + 48;
    }
    else
    {
        n = ((arr[0]-48)*10) + (arr[1]-48);
        if(n == 12)
            n = 0;
        arr[0] = n/10 + 48;
        arr[1] = n%10 + 48;
    }
    arr[9] = '\0';
    arr[8] = '\0';
    printf("%s",arr);
    return 0;
}
