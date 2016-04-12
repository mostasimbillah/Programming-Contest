#include<bits/stdc++.h>

using namespace std;

int main()
{
   float a,b,c;
   double pi = 3.14159;
   cin >> a >> b >> c;
   printf("TRIANGULO: %.3f\n",0.5*a*c);
   printf("CIRCULO: %.3f\n",pi*c*c);
   printf("TRAPEZIO: %.3f\n",0.5*(a+b)*c);
   printf("QUADRADO: %.3f\n",b*b);
   printf("RETANGULO: %.3f\n",b*a);


    return 0;
}






