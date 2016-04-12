#include <stdio.h>
#include<math.h>

int main()
{

    int t,n,a=0,i=1,j=1;
    for(i=1,j=7;i<=9;)
    {

        printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i,j-1);
        printf("I=%d J=%d\n",i,j-2);
        i=i+2;
        j=j+2;
    }

    return 0;
}






