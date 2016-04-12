#include <stdio.h>
#include<math.h>

int main()
{

    int t,n,a,i,j;
    double sum=0.0;

    for(i=1;i<=100;i++)
    {

    sum=sum+ (1.0/i);

    }

    printf("%.2lf\n",sum);
    return 0;
}








