#include<stdio.h>

int main()
{

  int n,k,arr[100],i,temp,count=0;

  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
      if(i==k-1)
      {
          temp=arr[i];
      }
  }
  for(i=0;i<n;i++)
  {
      if(arr[i]>=temp && arr[i]>0)
      {
          count++;
      }else
      {
          break;
      }
  }
  printf("%d\n",count);

    return 0;
}

