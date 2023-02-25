#include<bits/stdc++.h>
#include <iterator>
using namespace std;

int main()
{

   map <string, int> m;
   map <string, int>::iterator it;

   m["dipta"]  =  43;
   m["arnab"]  =  42;
   m["arnab"]  =  45;
   // m["nabil"]  =  41;
   m.insert(make_pair("make_pair", 41));

   it = m.begin();

   printf("%d",m["arnab"]);
   ++it;
   cout<< it  ->first <<endl;
   cout<< it  ->second <<endl;
   for (it = m.begin(); it !=m.end(); ++it)
   {
      cout<< it->first << " " << it->second <<endl;
   }
   return 0;
}