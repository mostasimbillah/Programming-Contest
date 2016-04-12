#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c,d,e,f;

    cin >> a >> c >> b >> d;

    e=(a*60)+c;
    f=(b*60)+d;

    if(a>=b)
    {
        cout << "O JOGO DUROU " << (((24*60)-(abs(e-f)))/60) << " HORA(S) E " <<(((24*60)-(abs(e-f)))%60)<< " MINUTO(S)\n" ;

    }else
    {
        cout << "O JOGO DUROU " << (abs(e-f)/60) << " HORA(S) E "<<(abs(e-f)%60) <<" MINUTO(S)\n" ;
    }


    return 0;
}




