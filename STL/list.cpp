#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;

list<int> myList;   // Empty list
list<int> myList(5); // List with 5 elements initialized to 0
list<int> myList(5, 10); // List with 5 elements initialized to 10
list<int> myList2(myList);// Copy constructor
    
    // Adding elements
    myList.push_back(10);// Insert at end
    myList.push_back(20);
    myList.push_front(5);// Insert at beginning
    
//  myList.pop_back();// Remove last element
// myList.pop_front(); // Remove first element
// myList.erase(position);  // Remove element at position
// myList.clear();  // Remove all elements
    // Display elements
    cout << "List elements: ";
    for(const auto& elem : myList) {
        cout << elem << " ";
    }
    
    // Size
    cout << "\nSize: " << myList.size();
    
    // Sort
    myList.sort();

// list<int> myList = {1, 2, 3, 4, 5};
// auto front = myList.front(); // Access first element
// auto back = myList.back();// Access last element

// // Iteration
// for(auto it = myList.begin(); it != myList.end(); ++it) {
//     cout << *it << " ";
// }
    
    return 0;
}