#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=1;
    string str;
    cin >> t;
    while(t--)
    {
        getchar();
        getline(cin,str,'\n');

        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << "Case "<<c++<<": ";
        cout << str << endl;

    }


    return 0;
}

