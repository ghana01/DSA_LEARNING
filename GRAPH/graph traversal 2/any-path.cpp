#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>>graph;
unordered_set<int>visited;

int v;// no of vertices
void add_edge(int src,int des,bool bi_dir =true){
    graph[src].push_back(des);
    if(bi_dir){
        graph[des].push_back(src);
    }
}
bool dfs(int curr,int end ){
    if(curr==end){
        return true;
    }
    visited.insert(curr);//mark visited
    for(auto neighbour:graph[curr]){
       if(! visited.count(neighbour)){
            bool result =dfs(neighbour,end);
            if(result){
                return true;
            }
        }
    }
    return false;
}
bool any_path(int src,int dst){
    return dfs(src,dst);
}

int main (){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int x,y;
    cin>>x>>y;
    cout<<any_path(x,y)<<endl;
    return 0;
}
