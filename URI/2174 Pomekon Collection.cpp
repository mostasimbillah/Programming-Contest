#include<bits/stdc++.h>
using namespace std;

int main()
{

    set<string> collection;
    int n;
    cin >> n;
    while(n--)
    {
        string pok;
        cin >> pok;
        collection.insert(pok);
    }
    int l=collection.size();
    printf("Falta(m) %d pomekon(s).\n",(151-l));

    return 0;
}
