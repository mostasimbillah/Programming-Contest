#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;
vector<pair<int,int> >v;// Be care full about space otherwise compilation eror :(
int main()
{


    int n,m,a,b;
    ll sum=0;

    cin >>n>>m;

    for(int i=0;i<m;i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(b,a));
    }

    sort(v.begin(),v.end());
    //for(int i=m-1;i>=0;i--)cout << v[i].second<<" "<<v[i].first<<endl;
    int j=1;
    for(int i=v.size()-1;i>=0;i--)
    {
        int c=1;
        for(;j<=n&&c<=v[i].second;j++)
        {
            sum+=v[i].first;
            c++;
        }

    }
    cout <<sum <<endl;
    return 0;
}

