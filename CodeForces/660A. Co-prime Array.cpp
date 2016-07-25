#include<bits/stdc++.h>

using namespace std;
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
int main()
{

    int n,j=0,c=0;
    long long arr[10001],arr2[10001];
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

        if(i!=0&&gcd(arr[i],arr[i-1])!=1)
        {
            arr2[j++]=1;
            c++;
        }
        arr2[j++]=arr[i];

    }
    cout << c << endl;
    for(int i=0;i<j;i++)
    {
        cout << arr2[i] <<" ";
    }

    cout << endl;

    return 0;
}
