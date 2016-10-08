#include <stdio.h>

int main()
{
    int t,m,d,n,i,total=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n);
        if(n==0)
            break;

           while(n>=2)
           {
              m=(n%3);
              d=(n/3);
              n=m+d;
              total+=d;
              if(n==2)
                n=3;
           }

        printf("%d\n",total);
        total=0;

        }




    return 0;
}
