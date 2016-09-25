#include<bits/stdc++.h>

using namespace std;

int main()
{

    string a,b,c;

    cin >> a;
    cin >> b;
    cin >> c;

    if(a[0]=='v')
    {
        if(b[0]=='a')
        {
            if(c[0]=='c')
            {
                cout << "aguia\n";
            }else if(c[0]=='o')
            {
                cout <<"pomba\n";
            }

        }else if(b[0]=='m')
        {
            if(c[0]=='o')
            {
                cout << "homem\n";
            }else if(c[0]=='h')
            {
                cout <<"vaca\n";
            }
        }
    }
    if(a[0]=='i')
    {
        if(b[0]=='i')
        {
            if(c[0]=='h'&& c[2]=='m')
            {
                cout << "pulga\n";
            }else if(c[0]=='h'&& c[2]=='r')
            {
                cout <<"lagarta\n";
            }

        }else if(b[0]=='a')
        {
            if(c[0]=='h')
            {
                cout << "sanguessuga\n";
            }else if(c[0]=='o')
            {
                cout <<"minhoca\n";
            }
        }
    }

    return 0;
}
