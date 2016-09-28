#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;
        if(s.at(0)=='o'&&s.at(2)=='e')
        {
            cout << 1 << endl;
        }else if(s.at(1)=='n'&& s.at(2)=='e')
        {
            cout << 1 << endl;
        }else if(s.at(0)=='o'&& s.at(1)=='n')
        {
            cout << 1 << endl;
        }else if(s.at(0)=='t'&&s.at(2)=='o')
        {
            cout << 2 << endl;
        }else if(s.at(1)=='w'&& s.at(2)=='o')
        {
            cout << 2 << endl;
        }else if(s.at(0)=='t'&& s.at(1)=='w')
        {
            cout << 2 << endl;
        }else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
