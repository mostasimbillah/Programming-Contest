#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c,i,counter=0;
    double e;

    cin >> a >> b;
    while(a!=0 && b!=0 )
    {

     for(i=a;i<=b;i++)
     {
         c=sqrt(i);
         e=sqrt(i);
         if((c-e)==0)
            counter++;

     }

    cout << counter << endl;
    counter=0;
    cin >> a >> b;
    }


    return 0;
}
