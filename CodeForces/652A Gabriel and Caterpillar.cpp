#include<bits/stdc++.h>

using namespace std;

int main()
{

    int h1,h2,a,b,r,d=0;

    cin >> h1 >> h2;
    cin >> a >> b;

    r=(8*a)+h1;

    if(r>=h2)
    {
        cout << d  <<  endl;
    }else if(a==b && h2-h1>8)
    {
         cout << -1 << endl;
    }
    else if(a>=b){

    while(1)
    {
        if(r>=h2)
            break;

         d++;
        r+=-(12*b)+(12*a);
       // cout << r << endl;
       // d=h2/r;
       // if(d==0)
         //   cout << r << endl;
      //  else

   }
        cout << d << endl;

    }else
    {
         cout << -1 << endl;
    }


    return 0;
}

