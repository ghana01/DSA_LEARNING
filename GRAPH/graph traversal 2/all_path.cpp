#include<iostream>
#include<vector>
#include<list>
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
void dfs(int curr,int end,vector<int> &path ){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr);//mark visited
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
       if(! visited.count(neighbour)){
            dfs(neighbour,end,path);
            
            
        }
    }
    path.pop_back();
    visited.erase(curr);
    return ;
}
void all_path(int src,int dst){
     vector<int>v;
     dfs(src,dst,v);
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
    all_path(x,y);
    for(auto path:result){
        for(auto el:path){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}