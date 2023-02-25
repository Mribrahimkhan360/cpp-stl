#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
  vector <int> vec;
  vector <int>::iterator it;
  // vector <double> vec1;
  //vector <double>::iterator it2;
  //it2 = vec1.begin();
  //vector <char> vec3;
  //vector <char>::iterator it3;
  for (int i = 1; i <= 5; i++)
  {
  	vec.push_back(i);
  }

  for (int i = 0; i < vec.size(); i++)
  {
  	cout << vec[i] << "\t";
  }
  puts("");

  for (it = vec.begin(); it! = vec.end(); it++)
  {
  	cout << *it << endl;
  	/* code */
  }

  //it = vec.begin();
  //it++;
  return 0;
}
