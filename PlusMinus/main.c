#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    const int cons_size = 1000;
    int size,arr[cons_size];
    float zero=0,pos=0,neg=0;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else if(arr[i] == 0)
            zero++;
    }

    printf("%f\n%f\n%f",(float)pos/size,(float)neg/size,(float)zero/size);
    return 0;
}
