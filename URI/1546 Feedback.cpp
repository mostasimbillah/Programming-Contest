#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,i,tt;

    cin >> t;

    int arr[100];


    for(i=0;i<t;i++)
    {
        cin >> tt;
        for(int ii=0;ii<tt;ii++)
        {
            cin >> arr[ii];
            if(arr[ii]==1)
            {
                cout << "Rolien\n";
            }else if(arr[ii]==2)
            {
                cout << "Naej\n";
            }else if(arr[ii]==3)
            {
                cout << "Elehcim\n";
            }else if(arr[ii]==4)
            {
                cout << "Odranoel\n";
            }
        }


    }



    return 0;
}

