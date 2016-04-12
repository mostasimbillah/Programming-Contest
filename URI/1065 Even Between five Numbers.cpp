#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c=0,i,arr[5];


    for(i=0;i<5;i++)
    {
        cin >> arr[i];
        if(abs(arr[i])%2==0)
            c++;
    }

    cout << c << " valores pares\n";

    return 0;
}



