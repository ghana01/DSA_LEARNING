#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>

using namespace std;
 int v;
 vector<list<pair<int,int>>>graph;
unordered_set<int>visited;
 void add_edge(int src,int des,int wt,bool dir=true){
    graph[src].push_back({des,wt});
    if(dir){
        graph[des].push_back({src,wt});
    }
 }
 void display(){
    for(int i=0;i<v;i++){
        cout<<i<<"->";
        for(auto el:graph[i]){
            cout<<el.first<<'-'<<el.second<<',';
        }
    }
 }
bool dfs(int curr,int end ){
    if(curr==end){
        return true;
    }
    visited.insert(curr);//mark visited
    for(auto neighbour:graph[curr]){
       if(! visited.count(neighbour.first)){
            bool result =dfs(neighbour.first,end);
            if(result){
                return true;
            }
        }
    }
    return false;
}





int main(){

cin>>v;
graph.resize(v);  // ✅ Resize the graph vector here
int e;
cin>>e;

while(e--){
    int s,d;
    int wt;
    cin>>s>>d>>wt;
    add_edge(s,d,wt);
}
display();
}