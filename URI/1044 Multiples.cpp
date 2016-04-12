#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c;

    cin >> a >> b;
    if(a>b)
    {
        if(a%b==0)
        {
            cout << "Sao Multiplos\n";
        }
        else
        {
            cout << "Nao sao Multiplos\n";
        }
    }else{

    if(b%a==0)
        {
            cout << "Sao Multiplos\n";
        }
        else
        {
            cout << "Nao sao Multiplos\n";
        }

    }


    return 0;
}


