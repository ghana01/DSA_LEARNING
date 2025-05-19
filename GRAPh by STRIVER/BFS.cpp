#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>> graph;
int v;// no of vertices
void add_edge(int src,int des){
    graph[src].push_back(des);
    graph[des].push_back(src);//for undirectional graph
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto el :graph[i]){
            cout<<el<<",";
        }
        cout<<"\n";
    }
}
void bfs(vector<vector<int>>graph,int src){
    vector<bool>visited(graph.size(),false);
    queue<int>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty()){
        int node =q.front();
        q.pop();
        cout<<node<<" ";
        for(auto el:graph[node]){
            if(!visited[el]){
                q.push(el);
                visited[el]=true;
            }
        }
    }
}
int main(){
cin>>v;
graph.resize(v);
int e;
cin>>e;
while(e--){
    int src,des;
    cin>>src>>des;
    add_edge(src,des);
}
display();
bfs(graph,0);
}