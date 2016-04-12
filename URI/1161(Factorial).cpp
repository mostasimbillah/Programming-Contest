#include<bits/stdc++.h>

using namespace std;

unsigned long long fact(int a)
{
    if(a==0)
        return 1;

    return (a*fact(a-1));
}
int main()
{

    int a,b;
        while(scanf("%d %d", &a, &b) != EOF) // EOF eivabae dite hobe . Other wise wrong answer.
        cout << fact(a)+fact(b) << endl;





    return 0;
}
