#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include<climits> // for INT_MAX

using namespace std;

vector<list<int>> graph;
unordered_set<int> visited;

int v;

void add_edge(int src, int des, bool bi_dir = true) {
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}

void bfs(int src, vector<int>& dist) {
    queue<int> qu;
    visited.clear();
    dist.assign(v, INT_MAX);
    
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);

    while(!qu.empty()) {
        int curr = qu.front();
        qu.pop();

        for(auto neighbour : graph[curr]) {
            if(!visited.count(neighbour)) {
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr] + 1;
            }
        }
    }
}

int main() {
    cin >> v;
    graph.resize(v, list<int>());
    
    int e;
    cin >> e;

    while(e--) {
        int s, d;
        cin >> s >> d;
        add_edge(s, d); // undirected by default
    }

    int x, y;
    cin >> x >> y;

    vector<int> dist;
    bfs(x, dist);

    for(int i = 0; i < dist.size(); i++) {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
