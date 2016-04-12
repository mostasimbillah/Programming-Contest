#include <stdio.h>
#include<math.h>

int main()
{

    int t,n,a,i,j,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d%d",&a,&n);
        if(a>n)
        {

            for(j=n+1;j<a;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }
        }else
        {
            for(j=a+1;j<n;j++)
            {
                if(j%2!=0)
                    sum=sum+j;
            }

        }
        printf("%d\n",sum);
        sum=0;

    }

    return 0;
}







