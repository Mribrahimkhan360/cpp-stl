#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	a="This is a string"; //easy assiging
	b=a;//copy hoye gelo!:0
	c=a+b; //concreating

	cout<<c.size()<<endl;

	for (int i = 0; i < c.size(); i++)
	{
		/* code */
		cout<<c[i];
	}

    return 0;
}