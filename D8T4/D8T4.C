#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void merge(int*,int*,int*,int,int);
void mergesort(int*,int);

void main()
{
  int i,array_of_int[10] = {10,5,7,3,2,8,9,11,7,4};

  clrscr();

  mergesort(array_of_int,10);

  for(i=0;i<10;i++)
  {
	printf("%d\n",array_of_int[i]);
  }

  getch();
}

void merge(int* a,int* l,int* r,int leftcount,int rightcount)
{
  int i=0,j=0,k=0;

  while(i<leftcount && j<rightcount)
  {
	if(l[i] < r[j])
	  a[k++] = l[i++];
	else
	  a[k++] = r[j++];
  }
  while(i < leftcount)
	a[k++] = l[i++];
  while(j < rightcount)
	a[k++] = r[j++];
}

void mergesort(int* a,int n)
{
  int mid,i,*l,*r;

  if(n < 2)
  return;
  mid = n/2;
  l = (int*)malloc(mid*sizeof(int));
  r = (int*)malloc((n-mid)*sizeof(int));
  for(i=0;i<mid;i++)
	l[i] = a[i];
  for(i=mid;i<n;i++)
	r[i-mid] = a[i];
  mergesort(l,mid);
  mergesort(r,n-mid);
  merge(a,l,r,mid,n-mid);
  free(l);
  free(r);
}