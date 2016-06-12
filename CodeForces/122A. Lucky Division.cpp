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

int s_i(string Text)
{


int Result;

istringstream convert(Text);


if ( !(convert >> Result) )
    Result = 0;

    return Result;
}

int main()
{

    char str[1001];
    int c;
    bool flag=true;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {

        //printf("%d ",str[i]-48);
        if(str[i]=='4'||str[i]=='7')
        {

        }
        else
            flag=false;


    }

   // cout <<"Test 2"<<endl;
    if(flag==false)
    {
        //cout << "adas";
        c=s_i(str);
        if(c%7==0||c%4==0||c%47==0||c%74==0||c%477==0||c%474==0||c%747==0||c%774==0||c%777==0||c%447==0||c%444==0)
            flag=true;
    }

    if(flag==false)
        cout <<"NO\n";
    else
        cout << "YES\n";


    return 0;
}

