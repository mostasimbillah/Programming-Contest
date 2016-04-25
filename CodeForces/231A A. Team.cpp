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
        Email:mostasim.swe@gmail.com
        Department of Software Engineering(17)
        Daffodil International University
        Dhaka,Bangladesh.

                                                                      */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,c,sure=0,total=0;

    cin >> n;

    for(i=1;i<=n;i++)
    {
        cin >> a >> b >> c;
        if(a==1)
            sure++;
        if(b==1)
            sure++;
        if(c==1)
            sure++;

        if(sure>=2)
            total++;

        sure=0;
    }

    cout << total << endl;


    return 0;
}

