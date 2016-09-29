#include<bits/stdc++.h>
using namespace std;

int main()
{

    while(!cin.eof())
    {
         string pass;
        bool up=false,low=false,num=false,punc=false;
       getline(cin,pass);
        int l=pass.length();

        if(l>=6 && l<=32)
        {
            for(int i=0;i<l;i++)
            {
                if(islower(pass[i]))
                    low=true;
                if(isupper(pass[i]))
                    up=true;
                if(isdigit(pass[i]))
                    num=true;
                if((pass[i]>=48 && pass[i]<=57)||(pass[i]>=65 && pass[i]<=90)||(pass[i]>=97 && pass[i]<=122))
                {

                }else
                {
                    punc=true;
                }
            }
            if(low==true&&up==true&&num==true && punc==false)
            {
                cout <<"Senha valida.\n";
            }else{
                 cout <<"Senha invalida.\n";
            }


        }else
        {
            cout <<"Senha invalida.\n";
        }
    }



    return 0;
}
