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
/*
This problem can be solved very easy algo with array and index.
*/
#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v;
int main()
{

    int n,pi;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> pi;
        int j=i+1;
        v.push_back(make_pair(pi,j));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].second <<" ";
    }

    return 0;
}

