#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t,l,n,p,c;

    cin >> t;

    for(int i=1;i<=t;i++)
    {

        cin >> c >>l;
        int arr[l];
        for(int j=0;j<l;j++)
        {
            cin >> arr[j];
        }
        for(int j=0;j<l;j++)
        {
            for(int k=1;k<l;k++)
            {
                if(arr[j]+arr[k]==c)
                {
                    printf("Case #%d: %d %d\n",i,j,k);
                    break;
                }
            }
        }

    }



    return 0;
}
