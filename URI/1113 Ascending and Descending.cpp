#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;

    while(true){

                cin >> x;
                cin >> y;
                if(x == y) break;

                if(x > y)
                     cout << "Decrescente" << endl;
                else
                    cout << "Crescente" << endl;

    }
    return 0;
}
