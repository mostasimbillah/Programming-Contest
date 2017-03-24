 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 int main()
 {
    long long int  n, i=1, j, temp, sum;
    int t;
    scanf("%d",&t);
    while(t--)
        {
            scanf("%lld", &n);
            temp=n;
            sum=0;
            while(n!= 0)
                {
                    j=n%10;
                    sum=sum *10+j;
                    n=n/10;
                }
       if (sum == temp)
            printf("Case %d: Yes\n", i++);
       else
        printf("Case %d: No\n", i++);
       }
    return 0;

}
