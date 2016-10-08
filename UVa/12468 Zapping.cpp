#include<bits/stdc++.h>

using namespace std;

int main()
{

   int a,b,f,d;

   while(scanf("%d%d",&a,&b)==2)
   {

        if(a==-1 && b==-1)
            break;

       f=abs(a-b);
      // cout << a << b << f;
       d=100-f;

       if(d>f)
       {
           cout << f << endl;
       }else
       {
           cout << d << endl;
       }
   }

    return 0;
}

