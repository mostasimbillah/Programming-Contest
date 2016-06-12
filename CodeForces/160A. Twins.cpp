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

    int n,a,sum=0,sum2=0,c=0;
    int arr[101];
    cin >> n;
    for(int i=0;i<n;i++)
    {

        cin >> a;
        arr[i]=a;
        sum+=a;
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        if(sum2<=sum/2)
        {
            sum2+=arr[i];
            c++;
        }
        else if(sum2>sum/2)
        {
            break;
        }
    }
    cout << c << endl;

    return 0;
}

