#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;
vector<vector<int>>result;

int v;// no of vertices
void add_edge(int src,int des,bool bi_dir =true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}
void bfs(int src,int dest,vector<int> &dist){
    queue<int>qu;
    visited.clear();
    dist.resize(v,INT16_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while(! qu.empty()){
        int curr =qu.front();
        qu.pop();
        for(auto neighbour :graph[curr]){
            if(!visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;

            }
        }
    }
}


int main (){
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    visited.clear();
    while(e--){
        int s, d;
        cin >> s >> d;
        add_edge(s, d);
    }
    int x, y;
    cin >> x >> y;
    vector<int> dist(v, -1); // Initialize dist vector with size v and all values -1
    bfs(x, y, dist);
    for(int i = 0; i < dist.size(); i++){
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}