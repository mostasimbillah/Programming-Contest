#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

bool checkPalindrome(char n[])
{
    int l=strlen(n);
    int ch=l-1;
    bool flag=true;
    //cout << l << endl;
    if(l%2==0)
    {
        for(int i=0;i<l/2;i++)
        {
            char a=n[i];
            char b=n[ch-i];
            if(a==b)
                flag= true;
            else
                return false;
        }
        return flag;
    }else
    {
         for(int i=0;i<=((l/2)-1);i++)
        {
            char a=n[i];
            char b=n[ch-i];
            //cout  << i << " " << ch-i << endl;
            if(a==b)
                flag= true;
            else
                return false;
        }
        return flag;

    }

}
int main()
{

    ll t,n;
    char num[11];
    scanf("%lld",&t);
    int cn=1;
    while(t--)
    {
       // cin >> num;
       scanf("%s",num);
        if(checkPalindrome(num))
            printf("Case %d: Yes\n",cn);
        else
            printf("Case %d: No\n",cn);

        cn++;

    }


    return 0;
}
