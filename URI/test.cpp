#include<bits/stdc++.h>

using namespace std;


int main()
{



    int swp=0,n,mx=0;
    cin >> n;
    int arr[n];
    int mn=n-1;
     for(int i=0;i<n;i++)
    {

        cin >> arr[i];
        if(arr[i]>arr[mx])
            mx=i;



    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[mn])
            mn=i;
    }

    //cout << mx << endl << mn << endl;

      for(int i=0;;)
     {
       // cout <<" "<< i;

        for(int j=n-1;j>0;j--)
        {
            int temp=arr[j];

            if(arr[j]>arr[j-1])
            {
                arr[j]=arr[j-1];
                arr[j-1]=temp;

                swp++;
            }
        }
        i++;
        if(i==1)
            break;

     }


     //for(int i=0;i<n;i++)
      //  cout << arr[i]<<" ";

  for(int i=0;i<1;i++)
    {

        for(int j=0;j<n-1;j++)
        {
            int temp=arr[j];
            if(arr[j]<arr[j+1])
            {
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                swp++;
                //cout << arr[j]<<" g";
            }
        }

    }

    if(mx==0&& mn==n-1)
        cout <<0<<endl;
    else
         cout  << swp<<endl;



     //for(int i=0;i<5;i++)

    return 0;
}
