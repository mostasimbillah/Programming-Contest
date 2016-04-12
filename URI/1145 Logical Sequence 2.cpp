#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c=1,i=1,j;
    cin >> a >> b;

    while(i<=b)
    {
         for(j=1;j<=a;j++)
         {
             if(j==a)
                printf("%d",i++);
             else
                printf("%d ",i++);

         }

        printf("\n");
    }


    return 0;
}


