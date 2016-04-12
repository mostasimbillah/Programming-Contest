#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c;

    cin >> a >> b;
    if(a>=b)
    {
        cout << "O JOGO DUROU " << 24-abs(a-b) << " HORA(S)\n";

    }else
    {
        cout << "O JOGO DUROU " << abs(a-b) << " HORA(S)\n";
    }


    return 0;
}



