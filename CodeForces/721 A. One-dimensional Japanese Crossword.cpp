#include<bits/stdc++.h>

using namespace std;

int main()
{


    int n,b=0,c=0;
    cin >> n;
    string str;
    vector<int> v;
    cin >> str;

     int l= str.length();

     for(int i=0;i<l;i++)
     {
         if(str.at(i)=='B')
         {
             b++;
         }else
         {

             if(b!=0)
             {
                  c++;
                  v.push_back(b);
                  b=0;
             }


         }

     }
        if(b!=0)
        {
            c++;
            v.push_back(b);
            b=0;

         }

    cout << c << endl;
    for(auto nn: v)
        cout << nn << " ";
    cout << endl;
    return 0;
}
