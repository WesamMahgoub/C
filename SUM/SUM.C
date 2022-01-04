#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,sum=0,*arr;
  scanf("%d",n);
  arr = (int*)malloc(n*sizeof(int));
  for(i=0;i < n;i++)
  {
	scanf("%d",*(arr+i));
	sum += *(arr+i);
  }
  printf("%d",sum);
  return 0;
}
