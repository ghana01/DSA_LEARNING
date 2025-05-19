#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
    vector<int> heap;

    void upheapify(int child) {
        while (child > 0) {
            int parent = (child - 1) / 2;
            if (heap[parent] < heap[child]) {
                swap(heap[parent], heap[child]);
                child = parent;
            } else break;
        }
    }

    void downheapify(int idx, int bound) {
        while (idx < bound) {
            int left = 2 * idx + 1;
            int right = 2 * idx + 2;
            int maxel = idx;

            if (left < bound && heap[left] > heap[maxel])
                maxel = left;
            if (right < bound && heap[right] > heap[maxel])
                maxel = right;

            if (maxel != idx) {
                swap(heap[maxel], heap[idx]);
                idx = maxel;
            } else break;
        }
    }

public:
    MaxHeap(vector<int> &v) {
        heap = v;
        int n = heap.size();
        for (int i = n / 2 - 1; i >= 0; i--) {
            downheapify(i, n);
        }
    }

    void heapSort() {
        int n = heap.size();
        for (int i = n - 1; i > 0; i--) {
            swap(heap[0], heap[i]);           // Move max to end
            downheapify(0, i);                // Rebuild heap with reduced size
        }
    }

    void display() {
        cout << "[";
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i];
            if (i != heap.size() - 1) cout << ",";
        }
        cout << "]\n";
    }
};

int main() {
    vector<int> v = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    MaxHeap h(v);
    cout << "Max-Heapified array: ";
    h.display();

    h.heapSort();
    cout << "Sorted array: ";
    h.display();

    return 0;
}
