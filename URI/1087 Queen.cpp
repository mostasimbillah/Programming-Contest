#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h1,m1,h2,m2;




    while(1)
    {
     cin >> h1 >> m1 >> h2 >> m2;
     if((h1==0 && m1==0) && (h2==0 && m2==0))
        break;


   if((abs(h1-h2) == abs(m1-m2))&& h1!=h2 && m1!=m2)
   {
       cout << 1<<endl;
   }else if((h1==h2 && m1!=m2)|| (m1==m2 && h1!=h2))
   {
       cout << 1<< endl;
   }else if(h1==h2 && m1==m2)
   {
       cout << 0<< endl;
   }
   else
   {
              cout << 2<< endl;

   }

    }

    return 0;
}

