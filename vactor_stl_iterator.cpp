#include<bits/stdc++.h>
using namespace std;
int main()
{

	set< int > s;
	s.insert(10); 
	s.insert(11);
	s.insert(12);


	set< int >::iterator it;

	for(it = s.begin(); it != s.end(); it++) {
		cout<<*it<<endl;
	}

	return 0;
}