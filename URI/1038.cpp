#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x,y;
    cin >> x >> y;
    float item[5]={4.00,4.50,5.00,2.00,1.50};


    printf("Total: R$ %.2f\n",item[x-1]*y);
    return 0;
}




