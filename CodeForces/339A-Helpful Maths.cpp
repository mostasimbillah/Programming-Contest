#include<bits/stdc++.h>


using namespace std;

int s_i(string Text)
{


int Result;

istringstream convert(Text);


if ( !(convert >> Result) )
    Result = 0;

    return Result;
}
int c_i(char a)
{
    return a-'0';

}

int main()
{
    string a;
    cin >> a;
    int c=0;
    int arr[51];
    for(int i=0;i<a.length();i++)
    {
        if(a.at(i)=='+')
            continue;
        else
        {
            arr[c++]=c_i(a.at(i));
        }

    }

    sort(arr,arr+c);
    for(int i=0;i<c;i++)
    {
         if(i!=c-1)
            cout << arr[i] <<"+";
        else
            cout << arr[i]<< endl;
    }


    return 0;
}

