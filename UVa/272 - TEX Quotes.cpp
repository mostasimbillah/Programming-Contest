#include<bits/stdc++.h>

using namespace std;


int main()
{

    string str;
    int d=2;
    while(getline(cin,str))
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='"' && d%2==0)
            {
                cout <<"``";
                d++;
            }else if(str[i]=='"'&&d%2!=0)
            {
                cout << "''";
                d++;
            }else
            {
                cout << str[i];
            }
        }

        cout << endl;
    }




    return 0;
}
