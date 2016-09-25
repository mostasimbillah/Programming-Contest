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
    int n,i,s=0,o,oc4=0,oc3=0,oc1=0,oc2=0;

    cin >> n;

    for(i=1;i<=n;i++)
    {
        cin >> o;

        if(o==4)
            oc4++;
        if(o==3)
            oc3++;
        if(o==2)
            oc2++;
        if(o==1)
            oc1++;

    }
    int total=0;

    total+=oc4;

    total+=oc3;
    //cout << total << endl;
    if(oc3<oc1)
    {
        oc1-=oc3;
    }
    if(oc2%2==0)
    {
        total+=oc2/2;
        // cout << total << endl;
    }else
    {
        total+=(oc2/2)+1;

    }
    if(oc1%4==0)
    {
        total+=oc1/4;
    }else
    {
        total+=(oc1/4);

    }
    cout << total << endl;
    cout << oc1 << endl;

    return 0;
}

