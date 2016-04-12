#include <bits/stdc++.h>

using namespace std;

int main()
{

    char str[100];
    int d,countr=0,sum=0;
    while(gets(str))
    {
        cin >> d;
        getchar();
        sum=sum+d;
        countr++;
    }
    double avg;
    avg=sum/(double)countr;
    printf("%.1lf\n",avg);
    return 0;
}
