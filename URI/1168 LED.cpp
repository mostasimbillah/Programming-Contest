#include<bits/stdc++.h>
using namespace std;
int led(char a)
{
    if(a=='1')
        return 2;
    if(a=='2')
        return 5;
    if(a=='3')
        return 5;
    if(a=='4')
        return 4;
    if(a=='5')
        return 5;
    if(a=='6')
        return 6;
    if(a=='7')
        return 3;
    if(a=='8')
        return 7;
    if(a=='9')
        return 6;
    if(a=='0')
        return 6;
}

int main()
{

    int t,n,i,r=0,length,j;
    string str;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> str;
        length=str.length();
        for(j=0;j<length;j++)
        {
            r+=led(str[j]);
        }
        cout << r << " leds\n";
        r=0;
    }

    return 0;
}


