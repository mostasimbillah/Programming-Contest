#include<bits/stdc++.h>

using namespace std;

vector<pair<int,int> >v;

int main()
{
    //=====================Brute Force====================//
    int n,a,b,ii,it,c=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    for( ii=0;ii<n;ii++)
    {
        for(it=0;it<n;it++)
        {
            if(it!=ii)
            {
                if(v[ii].first==v[it].second)
                    c++;
            }
        }
    }
    cout << c << endl;

    return 0;
}
