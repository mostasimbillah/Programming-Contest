#include<stdio.h>

int main()
{

    double m,n,a;
    scanf("%lf%lf%lf",&m,&n,&a);
    printf("%.0lf",ceil(m/a)*ceil(n/a));

    return 0;
}
