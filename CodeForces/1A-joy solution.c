#include<stdio.h>
int main()
{
    int n,m,a,area_rec,area_sq,count=0,tiles,c,d;
    scanf("%d%d%d",&n,&m,&a);

    area_rec=n*m;
    area_sq=a*a;
    while(1)
    {
        area_rec=n*m;
        if(area_rec%area_sq==0)
        {
            tiles=area_rec/area_sq;
            break;
        }
        else
        {
             if(n%a!=0&&m%a!=0)
             {
                 n++;
                 m++;
             }
             else if(n%a!=0)
             {
                 n++;
             }
             else
             {
                 m++;
             }
        }
    }
    printf("%d\n",tiles);

return 0;
}
