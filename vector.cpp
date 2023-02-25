#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main() {

// //int array[3];
//   //int array[3];
//   //array[0] = 34;
//   //array[1] = 10;




// vector<int> vec;
// vec.push_back(34); // vac[0] = 34;
// vec.push_back(10); // vac[1] = 10;

// vec[0] = 9;
// cout << vec.size() <<endl;

// for (int i = 0; i < vec.size(); ++i)
// {
//   /* code */
//   cout << vec[i] << endl;
// }


  //vector <int> vec(1,1);
  vector <int> vec;
  vector <int>::iterator it;
  //vec.push_back(11);

  for (int i = 0; i <= 5; i++)
  {
    vec.push_back(i);
    /* code */
  }

  for (int i = 0; i < vec.size(); i++)
  {
    /* code */
    cout << vec[i] << "\t";
  }
  puts("");

  it = vec.begin();
  it++;
  cout << *it << endl; 
  return 0;
}