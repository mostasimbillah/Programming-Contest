#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str;
    locale loc;
    cin>> str;

    if(str.at(0)>=97)
        str.at(0)-=32;

    cout << str << endl;

    return 0;
}
