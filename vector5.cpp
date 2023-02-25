#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    int ar[5] = {5,2,1,6,3};
    sort(ar,ar+5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",ar[i] );
        /* code */
    }
    printf("\n");
    return 0;
}

