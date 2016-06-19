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
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {

        cin >> arr[i];

    }
    /*
    for(int i=0;i<2;i++)
    {

        for(int j=0;j<n-i-1;j++)
        {
            int temp=arr[j];
            if(arr[j]<arr[j+1])
            {
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }*/
    for(int i=0;i<n;i++)
        //cout << arr[i]<<" ";


     for(int i=0;i<2;i++)
    {

        for(int j=0;j<n-i;j++)
        {
            int temp=arr[j];
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }
    cout << endl;
       for(int i=0;i<n;i++)
        cout << arr[i]<<" ";
    return 0;
}

