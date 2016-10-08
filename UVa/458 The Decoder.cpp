#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
  char str[1001];
  while(scanf("%s",str)!=EOF)
    {
        int length=strlen(str);
      for(i=0;i<length;i++)
      {
          printf("%c",str[i]-7) ;
      }
      cout <<"\n";
  }



    return 0;
}

