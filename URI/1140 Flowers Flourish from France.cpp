#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(!cin.eof())
    {
        getline(cin,str);
        if(str.at(0)=='*')
            break;
        int l=str.length();
        bool flag=true;
        char chr=str.at(0);
        for(int i=1;i<l;i++)
        {
            if(str.at(i)==' ')
            {
                if(tolower(str.at(i+1))!=tolower(chr))
                    flag = false;
            }
        }
        if(flag)
            cout << "Y\n";
        else
            cout << "N\n";

        }



    return 0;
}
