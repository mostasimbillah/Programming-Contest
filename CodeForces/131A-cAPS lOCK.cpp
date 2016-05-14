#include <bits/stdc++.h>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{

  
	freopen("in","r",stdin);
  char str[101];
	int i,counter=0,counter2=0;

	cin >> str;



    for(i=0;i<strlen(str);i++)
    {
        //ALL CAPS lenght not one
      if(str[i]>=65 && str[i]<=90)
      {
          //str[i]=str[i]+32;
          counter++;
      }
      //Except the First one
      if(str[0]>=97 && str[0]<=122 && str[i]>=65 && str[i]<=90)
      {
          counter2++;
      }


    }

    if(counter==strlen(str)&& counter!=1)//ALL caps not length one
    {
         for(i=0;i<strlen(str);i++)
         {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
           // cout << str <<"Test\n";
         }

    }
    //Except the first one
    if(counter2!=0 && counter2==strlen(str)-1)
    {
        str[0]=str[0]-32;
         for(i=1;i<strlen(str);i++)
         {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i]=str[i]+32;
            }
         }


    }
    // Only changing for first and one letter length
     if(str[0]>=97 && str[0]<=122 && strlen(str)==1)
    {
        str[0]=str[0]-32;


    }else if(str[0]>=65 && str[0]<=90 && strlen(str)==1)
    {
         str[0]=str[0]+32;
    }

    cout << str << endl;

	return 0;
}

