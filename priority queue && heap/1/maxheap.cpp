#include <iostream>
#include <vector>
using namespace std;

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

    void downheapify(int idx) {
        while (idx < heap.size()) {
            int left = 2 * idx + 1;
            int right = 2 * idx + 2;
            int maxel = idx;

            if (left < heap.size() && heap[left] > heap[maxel]) {
                maxel = left;
            }
            if (right < heap.size() && heap[right] > heap[maxel]) {
                maxel = right;
            }

            if (maxel != idx) {
                swap(heap[maxel], heap[idx]);
                idx = maxel;
            } else {
                break;
            }
        }
    }
     void remove(int idx) {
        if (idx < 0 || idx >= heap.size()) return;

        swap(heap[idx], heap[heap.size() - 1]);
        heap.pop_back();

        if (idx < heap.size()) {
            upheapify(idx);
            downheapify(idx);
        }
    }
    void removeValue(int value) {
        for (int i = 0; i < heap.size(); i++) {
            if (heap[i] == value) {
                remove(i);
                break;
            }
        }
    }

    void pop() {
        //TC: O(log n)
        if (heap.size() == 0) return;
        swap(heap[0], heap[heap.size() - 1]);
        heap.pop_back();
        downheapify(0);
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
    return 0


//     h.push(3);
//     h.push(4);
//     h.push(11);
//     h.push(9);
//     h.push(14);
//     h.push(-1);
//     h.push(30);
//     h.push(44);
//     h.push(50);
//     h.display();  // should print [50,44,30,14,4,11,3,-1,9]
//     h.pop();  // removes 50
//     h.display();  // should print [30,14,11,9,4,-1,3,3]
//     h.removeValue(14);  // removes 14
//     h.display();  // should print [44,30,9,11,3,4,-1,3]
//     return 0;
}
