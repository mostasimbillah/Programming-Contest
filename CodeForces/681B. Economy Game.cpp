/*
                In the name of Allah,the most Gracious ,the most Merciful.
  __  __                 _                   _                 ____    _   _   _           _
 |  \/  |               | |                 (_)               |  _ \  (_) | | | |         | |
 | \  / |   ___    ___  | |_    __ _   ___   _   _ __ ___     | |_) |  _  | | | |   __ _  | |__
 | |\/| |  / _ \  / __| | __|  / _` | / __| | | | '_ ` _ \    |  _ <  | | | | | |  / _` | | '_ \
 | |  | | | (_) | \__ \ | |_  | (_| | \__ \ | | | | | | | |   | |_) | | | | | | | | (_| | | | | |
 |_|  |_|  \___/  |___/  \__|  \__,_| |___/ |_| |_| |_| |_|   |____/  |_| |_| |_|  \__,_| |_| |_|

        uva handle : mostasim || codeforces : mostasim
        Codechef: mostasim10 || topcoder: mostasim
        Email:mostasim.10@gmail.com
        Department of Software Engineering(17)
        Daffodil International University
        Dhaka,Bangladesh.

                                                                      */

#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    bool flag=false;
    cin >> n;

    for(int i=0;n>=1234567;i++)
    {
        n-=1234567;
        if(n==0)
            flag=true;


    }
    for(int j=0;n>=123456;j++)
    {
        n-=123456;
        if(n==0)
           flag=true;

        //cout << n << endl;
    }
     for(int j=0;n>=1234;j++)
    {
        n-=1234;
        if(n==0)
            flag=true;
    }

    if(flag==true)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

