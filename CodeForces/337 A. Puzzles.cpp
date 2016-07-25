#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;

    cin >> n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+m);
    int mn=arr[m-1]-arr[0];
    for(int i=0;i<m&& (n+i-1<m);i++)
    {
        if(arr[n+i-1]-arr[i]<=mn )
            mn=arr[n+i-1]-arr[i];


    }

    cout << mn << endl;
    return 0;
}
