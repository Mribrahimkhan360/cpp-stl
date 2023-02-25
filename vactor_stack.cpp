#include<bits/stdc++.h>
using namespace std;
int main()
{
	// queue<int>q;
	// q.push_back(100);
	// q.push_back(101);
	// q.push_back(102);

	// while(!q.empty()) {
	//     /* code */
	//     cou<<q.front()<<endl;
	//   	q.pop();
	// }

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