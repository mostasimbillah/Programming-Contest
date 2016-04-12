#include <stdio.h>
#include<math.h>

int main()
{

    int t,n,a=0,i,j=1;
    scanf("%d",&t);
    printf("%d ",a);
    for(i=1;i<t;i++)
    {
       n=a;
       if(i==t-1)
            printf("%d",j);
       else
        printf("%d ",j);

       a=j;
       j=n+j;


    }
    printf("\n");

    return 0;
}

