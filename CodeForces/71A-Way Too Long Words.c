#include<stdio.h>
#include<string.h>

int main()
{

    int n,i,length;
    scanf("%d",&n);
    char str[101];
    if(n<=100 && n>=1)
    {

        for(i=1;i<=n;i++)
        {
            scanf("%s",&str);
            length=strlen(str);
            if(length<=10)
            {
                printf("%s\n",str);
            }else
            {
                printf("%c%d%c\n",str[0],length-2,str[length-1]);
            }
        }

    }

    return 0;
}

