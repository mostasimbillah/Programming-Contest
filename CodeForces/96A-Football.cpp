#include <iostream>
#include<string.h>

using namespace std;

int main()
{

	char str[101];
	int i,counter=1;

	cin >> str;

	for(i=0;i<strlen(str);i++)
    {
        if(str[i]== str[i+1])
        {
            counter++;
        }else
        {
            if(counter<7)
            {

                counter=1;
            }
        }

    }
 if(counter>=7)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }


	return 0;
}
