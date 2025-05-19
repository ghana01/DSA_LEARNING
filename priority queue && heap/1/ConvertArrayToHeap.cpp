#include <iostream>
#include <vector>
using namespace std;
// we convert the array into the maxheap by using upheapify function
// TC:O(nlogn) SC:O(1);
//but we can do it in O(n) time complexity by using the downheapify function
// TC:O(n) SC:O(1);

class maxheap {
    vector<int> heap;

public:
    void upheapify(int child) {
        while (child > 0) {
            int parent = (child - 1) / 2;
            if (heap[parent] < heap[child]) {
                swap(heap[parent], heap[child]);
                child = parent;
            } else {
                break;
            }
        }
    }
    void push(int element) {
        //TC: O(log n)
        //SC: O(1)
        heap.push_back(element);
        upheapify(heap.size() - 1);  // fixed here
    }

    bool empty() {
        return heap.size() == 0;
    }

    void display() {
        cout << "[";
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i];
            if (i != heap.size() - 1) cout << ",";
        }
        cout << "]\n";
    }
    maxheap(vector<int>v){
        
        heap =v;
        for(int i=0;i<heap.size();i++){
            upheapify(i);
        }
    }
};

int main() {
    vector<int>v ={9,6,1,19,3,2,8,12,5};
    maxheap h(v);
    h.display();
    h.push(20);
    h.display();
    return 0;

    //assignment 
    //write the heap using the downheapyfy _Function
}

// implementation of maxheap using downheapify function
class maxheap {
    vector<int> heap;

public:
    void downheapify(int idx) {
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;
        int largest = idx;

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;

        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != idx) {
            swap(heap[idx], heap[largest]);
            downheapify(largest); // recursively fix the subtree
        }
    }

    void push(int element) {
        // TC: O(log n)
        heap.push_back(element);
        int idx = heap.size() - 1;
        while (idx > 0) {
            int parent = (idx - 1) / 2;
            if (heap[parent] < heap[idx]) {
                swap(heap[parent], heap[idx]);
                idx = parent;
            } else {
                break;
            }
        }
    }

    bool empty() {
        return heap.empty();
    }

    void display() {
        cout << "[";
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i];
            if (i != heap.size() - 1) cout << ",";
        }
        cout << "]\n";
    }

    // Constructor using downheapify (O(n))
    maxheap(vector<int> v) {
        heap = v;
        for (int i = (heap.size() / 2) - 1; i >= 0; i--) {
            downheapify(i);
        }
    }
};

int main() {
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    maxheap h(v);       // Build heap using downheapify
    h.display();

    h.push(20);         // Insert new element
    h.display();

    return 0;
}
