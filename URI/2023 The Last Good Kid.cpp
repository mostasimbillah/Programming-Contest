/*

    Solved 2023 by comparing string case insensitive and sorting string vector.
    29 sep 2016
    Mostasim Billah
    SWE17,DIU
*/


#include<bits/stdc++.h>

using namespace std;
bool stringCompare( const string &left, const string &right ){
   for( string::const_iterator lit = left.begin(), rit = right.begin(); lit != left.end() && rit != right.end(); ++lit, ++rit )
      if( tolower( *lit ) < tolower( *rit ) )
         return true;
      else if( tolower( *lit ) > tolower( *rit ) )
         return false;
   if( left.size() < right.size() )
      return true;
   return false;
}
int main() {

vector<string > str;

while(!cin.eof())
{
    string ss;
    getline(cin,ss);
    str.push_back(ss);

}
sort(str.begin(), str.end() ,stringCompare);
int l=str.size();
cout << str[l-1] << endl;
//for(auto name : str){
//    cout << name << endl;
//}
        return 0;

}
