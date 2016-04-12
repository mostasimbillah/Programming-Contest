#include<bits/stdc++.h>

using namespace std;

int main(){

int t,i;
while(scanf("%d",&t)==1)
{
    if(t==0)
        break;
    int arr[t],john=0,mary=0;

    for(i=0;i<t;i++)
    {
        cin >> arr[i];

        if(arr[i]==1)
            john++;
         if(arr[i]==0)
                mary++;
    }
    printf("Mary won %d times and John won %d times\n",mary,john);

}

    return 0;
}
