#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    while(scanf("%d%d%d",&a,&b,&c)==3)
    {

        if((a==0||a==1)&&(b==0||b==1)&&(c==0||c==1))
        {
            if((a==0 && b==0 &&c==1) || (a==1 && b==1&&c==0) )
                cout <<"C\n";
            else if((c==0 && b==0 && a==1) || (c==1 && b==1&&a==0))
                cout <<"A\n";
            else if((a==0&&c==0&&b==1) || (a==1 && c==1&&b==0))
                cout <<"B\n";
            else
                cout << "*\n";
        }else
        {
            break;
        }

    }



    return 0;
}
