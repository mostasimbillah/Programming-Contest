#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,i;
    int coun[20001];
    memset(coun,0,2001);
    cin >> t;

    int arr[t];


    for(i=0;i<t;i++)
    {
        cin >> arr[i];
        coun[arr[i]]++;


    }
     for(i=0;i<2001;i++)
    {

        if(coun[i]!=0)
        cout << i<< " aparece "<< coun[i]<<" vez(es)"<<endl;


    }


    return 0;
}
