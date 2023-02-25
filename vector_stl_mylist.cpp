#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<float>mylist;
	list<float>::iterator it;

	mylist.push_back(10);
	mylist.push_back(15);
	mylist.push_back(5);
	mylist.push_back(20);
	mylist.push_back(-1);

	mylist.reverse();
	mylist.clear();
 
	// vector <int> vec;
	// vec.reverse();
	cout<<" Array Size is : "<<mylist.size()<<endl;
	for (it = mylist.begin(); it !=mylist.end(); it++)
	{
		cout<<*it<<"\t";
	}
	printf("\n");
	return 0;
}
