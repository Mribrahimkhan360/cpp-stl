#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>



using namespace std;

bool myFung(int a, int b){
  return(a<b);
}

int main() {
  vector <int> vec;
  vector <int>::iterator it;

  vec.push_back(10); //1
  vec.push_back(420); //2
  vec.push_back(32); //3
  vec.push_back(52); //4
  vec.push_back(12); //5
  vec.push_back(50); //6

  sort(vec.begin(), vec.begin() +3);

  for (it = vec.begin(); it != vec.end(); it++)
  {
    /* code */
    cout << *it << "\t";
  }
  puts("");


  return 0;
}
