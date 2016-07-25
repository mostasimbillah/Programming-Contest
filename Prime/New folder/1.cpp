#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ull;
int main()
{

    int t;
    cin >>t;
    int c=1;
    while(t--)
    {
        ull ind = 0;
        ull len ;
        ull N ;
        ull arr1[100000], arr2[100000], ans;
        cin >> len >> N;
        for(int i = 0; i < len; i++)
    {
        arr1[i] = i; //assign index numbers to an array
    }

    for(int i = len-1; i >= 0; i--)
    {
        arr2[ind++] = arr1[i]; //reversely copy the index numbers into another array
    }

    for(int i = 0; i < len; i++)
    {
        if(arr2[i]==N)
        {
            ans = i;
            break;
        }
    }
    printf("Case %d: %d\n",c++, ans);

    }






    return 0;
}
