#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ti=1;
    int num;
    int cn=0;
    while(ti<2001)
    {
        cin>>num;
        if(num<0)
            break;
        else
        {
            if(num%2==1&&num!=1)
            {
                 num+=1;
            }

                while(num%2==0)
                {
                    num/=2;
                    cn++;
                    if(num%2==1&&num!=1)
                        num+=1;
                    if(num==1)
                        break;
                }

            printf("Case %d: %d\n",ti,cn);
            cn=0;
        }
        ti++;
    }


    return 0;
}
