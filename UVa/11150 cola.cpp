#include<bits/stdc++.h>

using namespace std;



int main()
{


   // freopen("out.txt","w",stdout);
    int n;

    while(scanf("%d",&n)!=EOF)
    {
        int org=n;
    if(n%3==2)
    {
        n+=1;
        while(n>2)
        {
            int div,mod;
            mod=n%3;
            div=floor(n/3);
            n=mod+div;
            org+=div;

        }

    }else
    {
         while(n>2)
        {
            int div,mod;
            mod=n%3;
            div=floor(n/3);
            if(mod+div==2)
                mod+=1;
            n=mod+div;
            org+=div;

        }
    }
    cout << org << endl;

    }



    return 0;
}
