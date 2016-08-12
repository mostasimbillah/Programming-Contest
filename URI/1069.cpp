#include<bits/stdc++.h>

using namespace std;

int main()
{

	string str;
	bool flag=true;
	stack<char> stk;
	int o=0,c=0,st=0;
	int n;
	cin >> n;
	while(n--)
	{
	    cin >> str;
        for(int i=0;i<str.length();i++)
        {

            if(str.at(i)=='<')
            {
                o++;
                st++;
                stk.push(str.at(i));

            }
            else if(str.at(i)=='>')
            {
                c++;
                st++;
                stk.push(str.at(i));

            }

        }
        while(!stk.empty())
        {


            if(stk.pop()=='>')
        }


            st=0;
            c=0;
            o=0;

	}

	return 0;
}


