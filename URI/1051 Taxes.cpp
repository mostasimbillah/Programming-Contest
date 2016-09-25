#include<bits/stdc++.h>

using namespace std;

int main()
{

    float salary,fsalary=0.0;

    cin >> salary;

    if(salary>=0 && salary<=2000)
    {
        cout << "Isento\n";

    }else if(salary>2000.00 && salary<=3000)
    {
        int tax=8;
        fsalary=salary-2000.00;
        float pay=(fsalary*tax)/100.00;
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << "R$ "<<pay << endl;
    }
    if(salary>3000.00 && salary<=4500)
    {
        int tax=18;
        fsalary=1000.00;
        float pay=(fsalary*8)/100.00;
        fsalary=salary-3000.00;
        pay+=(fsalary*tax)/100.00;
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << "R$ "<<pay << endl;
    }else if(salary>4500.00)
    {
        int tax=28;
        fsalary=1000;
        float pay=(fsalary*8)/100.00;
        fsalary=1500;
        pay+=(fsalary*18)/100.00;
        fsalary=salary-4500.00;
        pay+=(fsalary*tax)/100.00;
        cout << fixed << showpoint;
        cout << setprecision(2);
        cout << "R$ "<<pay << endl;
    }


    return 0;
}
