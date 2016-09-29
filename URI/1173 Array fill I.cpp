#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    unsigned long long int arr[10];
    cin >> n;
    arr[0]=n;
    cout <<"N[0] = "<<arr[0]<<endl;
    for(int i=1;i<10;i++)
    {
        arr[i]=(arr[i-1])*2;
        cout <<"N["<<i<<"] = "<<arr[i]<<endl;
    }

    return 0;
}


