//LCM
#include<bits/stdc++.h>

using namespace std;

int LCM(int x,int y)
   {
      int prod;
      if(y%x==0)
         return y;
      else
      {
         prod=x*y;
         while(x!=y) // get the GCD of 2 given integers
         {
            if(x>y)
               x=x-y;
            else
               y=y-x;   //x now is the GCD
         }
         return LCM(y,prod/x);  //recurse, changing x to y and vice versa
      }   //LCM = (x*y)/(GCD)
   }
   int main()
   {

    int x=100,y=80;

    cout << LCM(x,y);


       return 0;
   }
