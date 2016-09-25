#include<bits/stdc++.h>

using namespace std;

int main()
{
    float salary;

    cin >> salary;

    if(salary>=0 && salary<=400)
    {
        int percentage=15;
        float extra= (salary*percentage)/100.00;
        float total=salary+extra;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: %d %\n",percentage);

    }else if(salary>400.00 && salary<=800)
    {
        int percentage=12;
        float extra= (salary*percentage)/100.00;
        float total=salary+extra;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: %d %\n",percentage);

    }else if(salary>800.00 && salary<=1200)
    {
        int percentage=10;
        float extra= (salary*percentage)/100.00;
        float total=salary+extra;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: %d %\n",percentage);

    }else if(salary>1200.00 && salary<=2000)
    {
        int percentage=7;
        float extra= (salary*percentage)/100.00;
        float total=salary+extra;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: %d %\n",percentage);

    }else if(salary>2000.00 )
    {
        int percentage=4;
        float extra= (salary*percentage)/100.00;
        float total=salary+extra;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.2f\n",extra);
        printf("Em percentual: %d %\n",percentage);

    }



    return 0;
}
