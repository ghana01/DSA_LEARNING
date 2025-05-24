#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v; // Number of vertices

void add_edge(int src, int des, bool bi_dir = true) {
    if (src >= v || des >= v || src < 0 || des < 0) {
        cout << "Invalid edge: " << src << " -> " << des << endl;
        return;
    }

    graph[src].push_back(des);
    if (bi_dir) {
        graph[des].push_back(src);
    }
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) {
            cout << el << ", ";
        }
        cout << "\n";
    }
}

int main() {
    cin >> v;
    graph.resize(v);  // No need for list<int>() here

    int e;
    cin >> e;
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d);  // by default, adds bidirectional
    }

    display();
    return 0;
}



//class based implementation


// class Graph {
//     int V;  // Number of vertices
//     vector<vector<int>> adjList;  // Adjacency list

// public:
//     // Constructor
//     Graph(int vertices) {
//         V = vertices;
//         adjList.resize(V);  // Resize the list to hold V vertices
//     }

//     // Add edge (undirected by default)
//     void addEdge(int u, int v) {
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);  // Omit this line for directed graph
//     }

//     // Display the graph
//     void printGraph() {
//         for (int i = 0; i < V; i++) {
//             cout << "Node " << i << ": ";
//             for (int neighbor : adjList[i]) {
//                 cout << neighbor << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main() {
//     Graph g(5);  // Create a graph with 5 vertices

//     // Add edges
//     g.addEdge(0, 1);
//     g.addEdge(0, 4);
//     g.addEdge(1, 2);
//     g.addEdge(1, 3);
//     g.addEdge(1, 4);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);

//     // Print the graph
//     g.printGraph();

//     return 0;
// }
