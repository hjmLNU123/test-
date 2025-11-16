#include<stdio.h>
int main()
{
  int arr[5];
  for(int i =0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<5/2;i++)
  {
    int t=arr[i];
    arr[i]=arr[4-i];
    arr[4-i]=t;
  }
  
  for(int i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;
}