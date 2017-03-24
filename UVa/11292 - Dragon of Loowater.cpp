#include<bits/stdc++.h>

using namespace std;
//TODO: it's not solve yet
int main()
{

    int m,n,mm,nn,i=0,j=0;

    while(scanf("%d%d",&m,&n)==2)
    {
        if(m==0 && n==0)
        {
            break;
        }else
        {
            mm=m;
            nn=n;
            int arr[m];
            int arr2[n];
            for(int s=0;s<m;s++)
            {
                scanf("%d",&arr[s]);
            }
            sort(arr,arr+m);
           // for(int s=0;s<m;s++)
          //      printf("%d\t",arr[s]);
            for(int j=0;j<n;j++)
            {
                scanf("%d",&arr2[j]);
            }
            sort(arr2,arr2+n);
            if(m>n)
            {
                printf("Loowater is doomed!\n");
            }else
            {   int sum=0;
                bool yes=false;
                for(int k=0;k<m;k++)
                {
                   if(arr[k]<=arr2[k])
                   {
                       sum+=arr2[k];
                   }else
                   {
                        //
                        //printf("Loowater is doomed!\n");
                        yes=true;
                        break;
                   }
                }
                if(yes)
                    printf("Loowater is doomed!\n");
                else
                    printf("%d\n",sum);
            }

        }

    }



    return 0;
}
