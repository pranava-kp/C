/*
A sub array if a contigious part of an array. Conside the array[1,2,3,4].
In this there are 10 nonempty subarrays
1
2
3
4
12
23
34
123
234
1234
Print the subarrays along with its sum
*/
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)      // starting index
        for (int j = i; j <= n; j++) // count
            {
                for (int k = i; k < j; k++) // arrays
                    cout << a[k];
                cout << endl;
            }
}