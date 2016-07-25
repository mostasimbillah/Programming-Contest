#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    set<char>s;
    getline(cin,str);

    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            s.insert(str[i]);
        }

    }
    cout << s.size()<< endl;

    return 0;
}
