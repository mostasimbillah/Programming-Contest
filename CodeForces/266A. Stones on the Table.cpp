#include<bits/stdc++.h>

using namespace std;


int main()
{


    int n;

    cin >> n;
    char str[n];

    cin >> str;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==str[i+1])
            c++;
    }
    cout << c << endl;


    return 0;
}
