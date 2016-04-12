#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a ,b;

    cin >> a;
    cin >> b;
transform(a.begin(), a.end(), a.begin(), ::toupper);
transform(b.begin(), b.end(), b.begin(), ::toupper);


  if(a<b)
  {
      cout <<-1 << endl;
  }else if(b<a)
  {
      cout << 1 << endl;
  }else{

    cout << 0 << endl;
  }

    return 0;
}
