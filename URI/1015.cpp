#include<bits/stdc++.h>

using namespace std;
double distance_geo(double a1,double b1, double a2, double b2)
{
    return sqrt((pow(a2-a1,2)+pow(b2-b1,2)));

}
int main()
{
    double a,b,c,d;

    cin >> a >> b >> c >> d;



    printf("%.4lf\n",distance_geo(a,b,c,d));


    return 0;
}









