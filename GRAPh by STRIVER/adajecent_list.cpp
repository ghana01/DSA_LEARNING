#include<iostream>
#include<vector>
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
int main (){
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
return 0;
}

//another way to make adjacency list 
// in this approch we take graph as a local variable
