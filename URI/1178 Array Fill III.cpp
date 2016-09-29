#include<bits/stdc++.h>
using namespace std;
int main()
{


    double arr[100],n;
    cin >> n;
    arr[0]=n;
    cout <<"N[0] = "<< fixed << showpoint << setprecision(4)<<arr[0]<<endl;
    for(int i=1;i<100;i++)
    {
        arr[i]=(arr[i-1])/2.0;
        cout <<"N["<<i<<"] = "<< fixed << showpoint << setprecision(4)<<arr[i]<<endl;
    }

    return 0;
}


