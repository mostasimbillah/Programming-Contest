#include<bits/stdc++.h>
using namespace std;
int hcf(int n1, int n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else
       return n1;
}
int right_triangle(int a,int b,int c)
{
    if((a*a)==(b*b)+(c*c) ||(a*a)+(b*b)==(c*c) ||(a*a)+(c*c)==(b*b))
        return 1;
     else
        return 0;
}
int main()
{
    int x,y,z,p=0,r=0;
    while(scanf("%d%d%d",&x,&y,&z)==3)
    {
        if(hcf(hcf(x,y),z)==1)
        {
            p=1;

        }
        r=right_triangle(x,y,z);
        if(p==1&&r==1)
            cout <<"tripla pitagorica primitiva\n";
        else if(p==0&&r==1)
            cout << "tripla pitagorica\n";
        else
            cout << "tripla\n";
        p=0,r=0;
    }

    return 0;
}
