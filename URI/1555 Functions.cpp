#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,y,r,b,c,i;
   cin >> t;

   for(i=0;i<t;i++)
   {
       cin >> x >> y;

       r=pow((3*x),2) + (y*y);
       b=2*(x*x) + pow((5*y),2);
       c=-100*x + pow(y,3);

       if(r>b && r>c)
            cout << "Rafael ganhou\n";
       else if(b>r && b>c)
            cout << "Beto ganhou\n";
       else
            cout << "Carlos ganhou\n";
   }



    return 0;
}

