/******************************************************************************

| Function          | Description                     |
| ----------------- | ------------------------------- |
| `push_back()`     | Add element at end              |
| `push_front()`    | Add element at front            |
| `pop_back()`      | Remove last element             |
| `pop_front()`     | Remove first element            |
| `front()`         | Access first element            |
| `back()`          | Access last element             |
| `begin()`         | Iterator to beginning           |
| `end()`           | Iterator to end                 |
| `rbegin()`        | Reverse iterator begin          |
| `rend()`          | Reverse iterator end            |
| `empty()`         | Check if list is empty          |
| `size()`          | Returns number of elements      |
| `max_size()`      | Maximum possible size           |
| `clear()`         | Remove all elements             |
| `insert()`        | Insert element                  |
| `erase()`         | Remove element                  |
| `remove()`        | Remove specific value           |
| `remove_if()`     | Remove by condition             |
| `sort()`          | Sort list                       |
| `reverse()`       | Reverse list                    |
| `unique()`        | Remove consecutive duplicates   |
| `merge()`         | Merge two sorted lists          |
| `splice()`        | Transfer elements between lists |
| `swap()`          | Swap two lists                  |
| `resize()`        | Change size of list             |
| `assign()`        | Assign new values               |
| `emplace()`       | Construct element in-place      |
| `emplace_back()`  | Construct at end                |
| `emplace_front()` | Construct at front              |

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
#include<list>

using namespace std;

void printlist(list<int> num)
{
    cout << endl;
    for(auto& it:num) {
    cout << it << " ";
    }
}

int main() {

    list<int> numbers = {10, 20, 30, 40, 50};

    // Print list elements
    for(int value : numbers) 
        cout << value << " " ;
       
       cout << endl;
    

    for(auto& i: numbers)
       cout << i << " " ;
       
       cout << endl;
    
    list<int>::iterator it;
    for(it= numbers.begin(); it!= numbers.end(); it++)
    {
        cout << *it << " ";
    }
    
    printlist(numbers);
    
    numbers.push_back(4);
    numbers.push_front(2);
    cout << "front_element: " << numbers.front() << "  ";
    cout << "back_element:  " << numbers.back()  << "  ";
    printlist(numbers);
    cout << "size  " << numbers.size() << endl;
    numbers.pop_back();
    printlist(numbers);
    numbers.pop_front();
    printlist(numbers);
    auto k = numbers.begin();
    advance(k, 2); // per positions
    //++k;
    numbers.insert(k,8); // entering perticuler position
    printlist(numbers);
    numbers.insert(numbers.begin(),6); 
    
    numbers.assign({1,2,3,4,5,6,7}); // assign by not removing already existing 
    printlist(numbers);
    return 0;
}  
    
    


