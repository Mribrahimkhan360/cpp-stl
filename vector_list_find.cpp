#include<bits/stdc++.h>
#include <string>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;
int main()
{
	int ar[5] = {5,2,1,6,3};

	list <int> mylist (ar,ar+5);
	list <int>::iterator it;

	// it = find(mylist.begin(),mylist.end(),22);
	// cout << *it <<endl;

	// it =mylist.begin();
	// mylist.erase(it);


	//mylist.insert(it,7);


	// if (it== mylist.end())
	// {
	// 	cout<<" NOT Found "<<endl;
	// }else{
	// 	cout<<"Found" << endl;
	// }

	it = find(mylist.begin(),mylist.end(),1);
	mylist.erase(it);

	for(it = mylist.begin() ; it != mylist.end() ; it++)
	{
		cout<< *it <<"\t";
	}
	cout<<"\n";





	return 0;
}
