#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    getchar();
    while(t--)
    {
         string s;

        getline(cin,s);

        //---1st Part--

        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if((s[i]>=65 && s[i]<=90)||s[i]>=97 && s[i]<=122)
            {
               s[i]=s[i]+3;
            }

        }
       // cout << s<< endl;
        //--2nd Part--

        reverse(s.begin(),s.end());
       // cout << s<< endl;
        //--3rd Part--
        if(l%2==0)
        {
            int half=l/2;

            for(int i=half;i<l;i++)
            {
                s[i]=s[i]-1;
            }
        }else
        {
            int half=((l+1)/2);

            for(int i=half-1;i<l;i++)
            {
                s[i]=s[i]-1;
            }

        }

        cout << s<< endl;

    }

    return 0;
}
