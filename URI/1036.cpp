#include<bits/stdc++.h>

using namespace std;

int main()
{

    double a,b,c,d,e,r1,r2;// Double must nite hbe na hole wrong dekhabe

    cin >> a >> b >> c ;

    d=(pow(b,2)-(4*a*c));
    if(d>=0 && a!=0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }else
    {
        cout << "Impossivel calcular\n";
    }


    return 0;
}


