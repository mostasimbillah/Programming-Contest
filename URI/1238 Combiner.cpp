#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t,n,i,r=0,length,j,length2,len;
    string str1,str2,str3;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> str1 >> str2;
        length=str1.length();
        length2=str2.length();
        len=(length>length2)?length2:length;
        for(j=0;j<len;j++)
        {

            str3.append(str1,j,1);
            str3.append(str2,j,1);


            }
            if(length<length2)
                str3.append(str2.begin()+len,str2.end());
             else
                str3.append(str1.begin()+len,str1.end());
      cout << str3 << endl;
      str3.clear();
    }

    return 0;
}



