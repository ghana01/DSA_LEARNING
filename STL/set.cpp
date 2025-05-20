//STL Set Container Guide
//Sets in STL are containers that store unique elements in a sorted order. 
//They are implemented as binary search trees (usually red-black trees).

#include <iostream>
#include <set>
using namespace std;

int main() {
   set<int> mySet;                  // Empty set
  // set<int> mySet1 = {1, 2, 3};// Initialize with values
  // set<int> mySet2(mySet);// Copy constructor
    
    // Insertion
    mySet.insert(30); // Insert single element`
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(10); // Duplicate - won't be inserted
    

    // mySet.erase(10);               // Remove by value
    // mySet.erase(iterator);         // Remove by iterator
    // mySet.clear();                 // Remove all elements
    // Display elements
    cout << "Set elements: ";
    for(const auto& elem : mySet) {
        cout << elem << " ";  // Will print: 10 20 30
    }
    
    // Search
    if(mySet.find(20) != mySet.end()) {
        cout << "\nFound 20";
    }
    
    // Size
    cout << "\nSize: " << mySet.size();
    
    return 0;
}
//doint operation like delete ,serch take O(log n) time
//insertion takes O(log n) time
