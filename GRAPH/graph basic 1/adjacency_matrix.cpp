#include <iostream>
#include <vector>

using namespace std;

int v; // number of vertices
vector<vector<int>> adjMatrix;

// Function to add edge
void add_edge(int src, int dest, bool bi_dir = true) {
    adjMatrix[src][dest] = 1;
    if (bi_dir) {
        adjMatrix[dest][src] = 1;
    }
}

// Function to display the matrix
void display() {
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int e; // number of edges
    cin >> v >> e;

    // Initialize matrix with 0s
    adjMatrix.assign(v, vector<int>(v, 0));

    // Read edges
    while (e--) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest);
    }

    display();
    return 0;
}
