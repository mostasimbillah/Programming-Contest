#include<bits/stdc++.h>

using namespace std;

int main()
{

	string str;
    vector<char> vct;
	int c=0;
	int n;
	cin >> n;
	while(n--)
	{
	    cin >> str;
        for(int i=0;i<str.length();i++)
        {
            if(str.at(i)=='<')
            {
                vct.push_back(str.at(i));
            }
            else if(str.at(i)=='>')
            {
                vct.push_back(str.at(i));
            }
        }
        int l=0,r=0;
        for(int i=0;i<vct.size();i++)
        {
            if(vct[i]=='<')
            {
                l++;
            }else if(vct[i]=='>' && l>r)
            {
                r++;

            }
        }

        cout << r << endl;
        vct.clear();
        l=0;r=0;
	}

	return 0;
}


