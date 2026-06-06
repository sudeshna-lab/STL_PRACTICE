#include <iostream>
using namespace std;

int main()
{
    cout << "Enter size of an array: ";
    int n;
    cin >> n;

    cout << "Size of the array: " << n << endl;
   // int arr[n];  declaration in stack
    int* arr = new int[n];   // Dynamic array

    for(int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    int sum = 0 ; // always have to assign 0 without assignment it can take garbaje

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
     cout << "sum of the array   "  << sum << "  " ;
     
     
    delete[] arr;   // Free memory

    return 0;
}
