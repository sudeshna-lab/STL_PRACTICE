#include<limits.h>
using namespace std;

int main()
{
    int size;
    cout << "enter size of array" << "" ;
    cin>> size;
    int arr[size];
    cout << "please enter the elements of array" << "  " ;
    for(int i=0; i <=size-1; i++ )
    {
        
        cin>>arr[i];
        
    }
    
    for (int i=0; i<=size-1;i++)
    {
        cout << arr[i];
        
    }
    
    int largest_element = INT_MIN;
    for(int i=0;i<=size-1;i++)
    {
        if(arr[i] > largest_element )
        {
            largest_element = arr[i];
        }
    }
    
    cout << "largest_element" << largest_element << " " << endl;
    
    
    
}
