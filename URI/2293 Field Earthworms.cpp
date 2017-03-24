#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,high1=0,row=0,column=0,high2=0;

    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {

            scanf("%d",&arr[i][j]);
            row+=arr[i][j];
        }
        if(high1<row)
        {

            high1=row;
            row=0;
        }
        row=0;
    }

    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            //printf("%d ",arr[i][j]);
            column+=arr[i][j];
        }
        if(high2<column)
        {
            high2=column;
            column=0;
        }
        //cout << endl;
        column=0;
    }
    printf("%d\n",max(high1,high2));

    return  0;
}
