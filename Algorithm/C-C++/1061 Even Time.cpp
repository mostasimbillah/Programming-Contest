#include<bits/stdc++.h>

using namespace std;

int main()
{



   string s;
 unsigned long long int day1,day2,h1,h2,m1,m2,s1,s2,start=0,endt=0;

   cin >> s >> day1;
   cin >>h1 >> s>> m1 >> s>>s1;
   cin >> s >> day2;
   cin >>h2 >> s>> m2 >> s>>s2;

   endt=day2*24;
   endt+=h2;
   endt*=60;
   endt+=m2;
   endt*=60;
   endt+=s2;


   start=day1*24;
   start+=h1;
   start*=60;
   start+=m1;
   start*=60;
   start+=s1;

    int input=endt-start;
    int numberOfDays;
    int numberOfHours;
    int numberOfMinutes;
    int numberOfSeconds;

    numberOfDays = input / 86400;
    numberOfHours = (input % 86400 ) / 3600 ;
    numberOfMinutes = ((input % 86400 ) % 3600 ) / 60;
    numberOfSeconds = ((input % 86400 ) % 3600 ) % 60  ;

    cout << numberOfDays <<" dia(s)\n" << numberOfHours << " hora(s)\n" << numberOfMinutes << " minuto(s)\n" << numberOfSeconds << " segundo(s)" <<endl;
}
