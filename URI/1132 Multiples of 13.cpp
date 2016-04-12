#include <bits/stdc++.h>
using namespace std;

int main()
{

        int x,y,z,i,sum=0;

       cin >> x >> y;
        if(x<y)
        {

       for(i=x;i<=y;i++)
       {
           if(i%13!=0)
            sum=sum+i;
       }

    cout << sum << endl;
        }else
        {

       for(i=y;i<=x;i++)
       {
           if(i%13!=0)
            sum=sum+i;
       }

    cout << sum << endl;

        }




    return 0;
}

