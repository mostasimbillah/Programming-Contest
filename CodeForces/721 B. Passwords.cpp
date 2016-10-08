#include<bits/stdc++.h>

using namespace std;

int main()
{

    int k,n,lll=0;
    string cor;
    vector<string> str;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        str.push_back(s);

    }
    //sort(str.begin(),str.end());
    cin >> cor;
    int l= cor.length();
    int rep=0,loop=0,otime=0,btime=0,rep2=0,boro=0;
    for(int i=0;i<n;i++)
    {
        //cout << str[i].length() << "<< Len:\n";
        if(l>str[i].length())
        {
            rep2++;

        }else if(l>=str[i].length())
        {
          rep++;
        //cout << str[i].length() << "<< Len: "<<str[i]<<"\n";
        }
    }
    //cout << rep2 << " " << rep << endl;
    rep=rep+rep2;
    btime=(rep2+(rep2/k)*5)+1;
    otime=(rep+((rep-1)/k)*5);


    cout << btime << " ";
    cout << otime << endl;

    return 0;
}
