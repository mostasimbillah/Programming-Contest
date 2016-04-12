#include <bits/stdc++.h>
using namespace std;

int main()
{

        int x,y,z;

        while(scanf("%d%d",&x,&y)==2)
        {
            if(x>0&&y>0)
                cout << "primeiro\n";
            else if(x>0 && y<0)
                cout << "quarto\n";
            else if(x<0 && y< 0)
                cout << "terceiro\n";
            else if(x<0 && y >0)
                cout << "segundo\n";
            else
                break;

        }



    return 0;
}
