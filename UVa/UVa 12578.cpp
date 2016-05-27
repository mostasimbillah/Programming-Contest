#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;


int main()
{

    int t,l;
    double width,radius,areaCircle,areaFlag;
    cin >> t;

    for(int ti=0;ti<t;ti++)
    {

        cin >> l;
        width=0.6*l;
        radius=0.2*l;
        areaCircle=PI*radius*radius;
        areaFlag=l*width;

        printf("%.2f %.2f\n",areaCircle,(areaFlag-areaCircle));

    }


    //cout << PI;

    return 0;
}
