#include<iostream>
using namespace std;


int main()
{
	int n, a, mx=0, imx, imn, mn=1000;
	cin>> n;
	for(int i=0 ; i< n; i++)
	{
		cin>>a;
		if(a>mx)
		{
			mx=a;
			imx=i;
		}
		if(a<=mn)
		{
			mn=a;
			imn=i;
		}
	}
	int l= imx-imn+n-1;
	if(imx>=imn)
		l--;
	cout<< l;
	return 0;
}
