
#include <iostream>
#include <unordered_map>    
#include <list>
#include <string>
using namespace std;

class Graph {
public:
    // Adjacency map: node -> list of its neighbors
    unordered_map<string, list<string>> adj;

    // Add edge
    void add_edge(string u, string v, bool bidir = true) {
        adj[u].push_back(v);
        if (bidir) {
            adj[v].push_back(u);
        }
    }

    // Display graph
    void display() {
        for (auto pair : adj) {
            cout << pair.first << " -> ";
            for (auto neighbor : pair.second) {
                cout << neighbor << ", ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;

    g.add_edge("A", "B");
    g.add_edge("A", "C");
    g.add_edge("B", "D");
    g.add_edge("C", "D");
    g.add_edge("E", "F");

    g.display();

    return 0;
}
