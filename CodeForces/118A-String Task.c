#include<stdio.h>
#include<stdio.h>

int main()
{

    char str[101];
    int i;
    scanf("%s",&str);
    int length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' ||str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' )
        {
          continue;
        }else{

            if(str[i]>=65 && str[i]<=90)
            {
                printf(".%c",str[i]+32);
            }else{
            printf(".%c",str[i]);

            }


        }
    }
    return 0;
}

