#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c;

    cin >> a>> b >> c;

    set <int > s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    set<int >:: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout << *it << endl;
    }
    printf("\n%d\n%d\n%d\n",a,b,c);

    return 0;
}
