#include<bits/stdc++.h>

using namespace std;

int main()
{
    float arr[6];
    int coun=0;
    float sum=0;
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
        if(arr[i]>=0)
        {
            sum+=arr[i];
            coun++;
        }
    }
    cout << coun<<" valores positivos" << endl;
    printf("%.1f\n",(sum/coun));


    return 0;
}
