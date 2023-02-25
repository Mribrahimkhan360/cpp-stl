#include<bits/stdc++.h>
#include <list>
using namespace std;

int main()
{
    list <float> mylist;

    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_back(5);

    for (auto it : mylist)
    {
       cout << it <<endl;
    }

    return 0;
}

