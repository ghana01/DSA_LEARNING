#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    vector<vector<int>> matrix;
    int vertices;

public:
    Graph(int v) : vertices(v), matrix(v, vector<int>(v, 0)) {}

    void addEdge(int src, int dest) {
        if (src >= 0 && src < vertices && dest >= 0 && dest < vertices) {
            matrix[src][dest] = 1;
            matrix[dest][src] = 1;  // For undirected graph
        }
    }

    void printGraph() {
        for (int i = 0; i < vertices; ++i) {
            cout << "Vertex " << i << ": ";
            for (int j = 0; j < vertices; ++j) {
                if (matrix[i][j]) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int v, e;
    cin >> v >> e;

    Graph graph(v);

    for (int i = 0; i < e; ++i) {
        int src, dest;
        cin >> src >> dest;
        graph.addEdge(src, dest);
    }

    graph.printGraph();

    return 0;
}