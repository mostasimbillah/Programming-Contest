#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5];
    int couneven=0;
    int odd=0,pos=0,neg=0;
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
        {

            pos++;
        }
        if(arr[i]<0)
        {
            neg++;
        }
        if(abs(arr[i])%2==0)
        {
            couneven++;
        }else
        {
            odd++;
        }
    }
    cout << couneven<<" valor(es) par(es)" << endl;
    cout << odd<<" valor(es) impar(es)" << endl;
    cout << pos<<" valor(es) positivo(s)" << endl;
    cout << neg<<" valor(es) negativo(s)" << endl;



    return 0;
}

