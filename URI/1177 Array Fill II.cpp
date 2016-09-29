#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,b=0;
    unsigned long long int arr[1000];
    cin >> n;
    arr[0]=n;

    for(int i=0;i<1000;i++)
    {
        if(b==n)
        {
            b=0;
        }
        arr[i]=b++;
        cout <<"N["<<i<<"] = "<<arr[i]<<endl;
    }

    return 0;
}



