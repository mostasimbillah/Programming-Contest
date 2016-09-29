#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=0;
    double a,sum=0.0;
    while(1)
    {
        cin >> a;
        if(a<0)
        {
            break;
        }else
        {
            sum+=a;
            n++;
        }
    }
    double avg=sum/n;
    printf("%.2f\n",avg);

    return 0;
}

