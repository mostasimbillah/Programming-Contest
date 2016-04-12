#include<bits/stdc++.h>

using namespace std;

int main()
{

    int y;

    while (scanf("%d",&y)!=EOF)
    {
        if(y%4==0 && y%400==0)
        {
            cout << "This is leap year.\n";
        }
        if(y%15==0)
        {
            cout << "This is huluculu festival year.\n";
        }
        if(y%4==0  && y%400==0 && y%55==0)
        {
            cout << "This is bulukulu festival year.\n";
        }else {

        cout << "This is an ordinary year.\n";

        }
    }

    return 0;
}
