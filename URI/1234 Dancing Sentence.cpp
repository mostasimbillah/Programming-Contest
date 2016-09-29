/*
majhe maje uri te while(!cin.eof()) e presentation error dei
bt while(getline(cin,str)) e dei na :)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    bool changeCaseUp=false;
    while(getline(cin,str))
    {
        int l=str.length();
        for(int i=0;i<l;i++)
        {
            if((str[i]>=65 && str[i]<=90)||str[i]>=97 && str[i]<=122)
            {
                if(changeCaseUp==false)
                {
                    if(str[i]>=65 && str[i]<=90)
                    {
                        //no change c
                        cout << str[i];
                        changeCaseUp=true;
                    }else
                    {
                        str[i]=str[i]-32;
                         cout << str[i];
                        changeCaseUp=true;
                    }
                }else
                {
                    if(str[i]>=97 && str[i]<=122)
                    {
                        //no change c
                         cout << str[i];
                        changeCaseUp=false;
                    }else
                    {
                        str[i]=str[i]+32;
                         cout << str[i];
                        changeCaseUp=false;
                    }
                }
            }else
            {
                cout << str[i];
            }
        }
        cout << endl;
        changeCaseUp=false;
    }

    return 0;
}
