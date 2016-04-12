#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c=0,i,arr[100];
    int value=0,pos;

    for(i=0;i<100;i++)
    {
        cin >> arr[i];
       if(arr[i]>value)
       {
           value=arr[i];
           pos=i;
       }

    }
    cout << value <<endl << pos+1<< endl;


    return 0;
}





