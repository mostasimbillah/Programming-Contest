#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,low=0,pos=0;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    low=arr[0];
    for(int i=1;i<n;i++)
    {

        cin >> arr[i];

        if(low>arr[i])
        {
            pos=i;
            low=arr[i];
        }
    }
    cout <<"Menor valor: "<< arr[pos] << endl;
    cout << "Posicao: "<<pos << endl;

    return 0;
}
