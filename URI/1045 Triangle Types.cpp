#include<bits/stdc++.h>

using namespace std;

int main()
{


    double aa[3],a,b,c;
    cin >> aa[0]>>aa[1]>>aa[2];
    sort(aa,aa+3);
    a=aa[2];
    b=aa[1];
    c=aa[0];
    if(a>=(b+c))
    {
        cout << "NAO FORMA TRIANGULO\n";

    }else{


        if((a*a)==((b*b)+(c*c)))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }else if((a*a)>((b*b)+(c*c)))
        {
           // cout <<a*a <<" " << b*b <<" " << c*c << endl;
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }else if((a*a)<((b*b)+(c*c)))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if(a==b && b==c)
        {
            cout << "TRIANGULO EQUILATERO\n";
        }else if(a==b && a!=c)
        {
            cout << "TRIANGULO ISOSCELES\n";
        }else if(a==c && a!=b)
        {
            cout << "TRIANGULO ISOSCELES\n";
        }else if(c==b && a!=c)
        {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }
    return 0;
}
