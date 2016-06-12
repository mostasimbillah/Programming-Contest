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

        string str,str2="hello";
        int h=0,e=0,l=0,o=0;
        int j=0;
        cin>> str;
        for(int i=0;i<str2.length();i++)
        {

            for(;j<str.length();)
            {
                if(str2.at(i)==str.at(j))
                {
                   // cout << i << " "<<str2.at(i)<< j << " " <<str.at(j)<<endl;
                    h++;
                    j++;
                    break;
                }else
                {
                    j++;
                    continue;
                }
            }

        }
       // cout << h << endl;
        if(h==5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;



    return 0;
}

