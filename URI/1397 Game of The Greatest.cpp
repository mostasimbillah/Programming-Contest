#include<bits/stdc++.h>

using namespace std;


int main()
{

    int t,i,a,b,p1=0,p2=0;
    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;

      for(i=1;i<=t;i++)
      {
          cin >> a >> b;

          if(a>b)
            p1++;
          else if(b>a)
            p2++;
      }
      cout << p1 << " " << p2 << endl;
      p1=0;
      p2=0;
    }


    return 0;
}


