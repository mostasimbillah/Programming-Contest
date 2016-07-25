#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,p,q;
    int arr[101];
    set<int>s;
    cin >> n>>p;

    for(int i=0;i<p;i++)
    {
        int a;
        cin >>a;
         s.insert(a);
    }

    cin >> q;

    for(int i=0;i<q;i++)
    {
        int a;
        cin>> a;
        s.insert(a);

    }
    if(n==s.size())
        cout <<"I become the guy.\n";
    else
        cout <<"Oh, my keyboard!\n";

    return 0;
}
