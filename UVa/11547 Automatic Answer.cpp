#include <bits/stdc++.h>
#include <string>

using namespace std;
string to_string(int a)
{

}

int main()
{

  int a,b,n,k,e=0,c,t,i,d,f,g,h,j;
  string res;

  cin >> t;
  for(i=0;i<t;i++)
  {
      cin >> n;
      d=n*567;
      e=d/9;
      f=e+7492;
      g=f*235;
      h=g/47;
      j=h-498;
    int Number = j;
    string Result;

        stringstream convert;

        convert << Number;

        Result = convert.str();

        int length=Result.length();
        cout << Result[length-2]<< endl;


  }


    return 0;
}

