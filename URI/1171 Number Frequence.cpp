#include<bits/stdc++.h>

using namespace std;
int count_value_appear(int *a[],int b,int c)
{
    int i,countr=0;
    int length=b;
    for(i=0;i<length;i++)
    {
        if((int)a[i]==c)
            countr++;
    }
    return countr;
}

int main()
{

    int t,i;

    cin >> t;

    int arr[t];


    for(i=0;i<t;i++)
    {
        cin >> arr[i];


    }
     for(i=0;i<t;i++)
    {

        cout << arr[i]<< " aparece "<< count_value_appear((int**)arr[t],t,arr[i])<<" vez(es)"<<endl;


    }


    return 0;
}
