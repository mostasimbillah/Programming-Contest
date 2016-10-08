#include <bits/stdc++.h>

using namespace std;

int word_no(char i)
{
    if(i=='a')
    return 1;
if(i=='b')
    return 2;
if(i=='c')
    return 3;
if(i=='d')
    return 1;
if(i=='e')
    return 2;
if(i=='f')
    return 3;
if(i=='g')
    return 1;
if(i=='h')
    return 2;
if(i=='i')
    return 3;
if(i=='j')
    return 1;
if(i=='k')
    return 2;
if(i=='l')
    return 3;
if(i=='m')
    return 1;
if(i=='n')
    return 2;
if(i=='o')
    return 3;
if(i=='p')
    return 1;
if(i=='q')
    return 2;
if(i=='r')
    return 3;
if(i=='s')
    return 4;
if(i=='t')
    return 1;
if(i=='u')
    return 2;
if(i=='v')
    return 3;
if(i=='w')
    return 1;
if(i=='x')
    return 2;
if(i=='y')
    return 3;
if(i=='z')
    return 4;
if(i==' ')
    return 1;
}

int main()
{

  int v,t=0,test,i;
  cin >> test;
getchar();
  for(i=1;i<=test;i++)
  {
    char str[101];
   gets(str);

int length=strlen(str);

for(v=0;v<length;v++)
{
    t=t+word_no(str[v]);
}
printf("Case #%d: %d\n",i,t);
t=0;
  }






    return 0;
}

