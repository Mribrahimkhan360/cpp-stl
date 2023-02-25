#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ar[5] = {1, 3, 2, 6, 4};
	list <int> mylist(ar,ar+5);
	list <int>::iterator it;

	// if (mylist.empty())
	// {
	// 	cout<<"Empty"<<endl;
	// }
	// else {
	// 	cout<<"Filled"<<endl;
	// }
	cout<<mylist.front()<<endl;
	cout<<mylist.back()<<endl;

	mylist.pop_front();
	mylist.pop_back();
	mylist.pop_front();

	for (it = mylist.begin(); it != mylist.end(); it++)

	{
		cout << *it << "\t";
	}
	return 0;
}
