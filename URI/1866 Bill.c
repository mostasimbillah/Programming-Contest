#include <stdio.h>
#include<math.h>

int main()
{

    int t,n,a=0,i,j=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
       scanf("%d",&a);
       if(a%2==0)
       {
              printf("%d\n",0);
       }
       else
       {
            printf("%d\n",1);
        }

    }


    return 0;
}


