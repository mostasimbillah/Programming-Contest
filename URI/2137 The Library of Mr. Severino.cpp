#include<bits/stdc++.h>

using namespace std;

int main() {

vector<string > str;
int n;
while(!cin.eof())
{
    cin >>n;
    while(n--)
    {
        string ss;
        cin >> ss;
        str.push_back(ss);

    }
    sort(str.begin(), str.end());

    for(auto name : str){
        cout << name << endl;
    }
    str.clear();

}

        return 0;

}

