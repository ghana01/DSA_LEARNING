vector<list<int> >graph;

// int v;// no of vertices
// void add_edge(int src,int des,bool bi_dir =false){
//     graph[src].push_back(des);
//     if(bi_dir){
//         graph[des].push_back(src);
//     }
// }
// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<"->";
//         for(auto el :graph[i]){
//             cout<<el<<",";
//         }
//         cout<<"\n";
//     }
// }


// int main (){
//     cin>>v;
//     graph.resize(v,list<int>());
//     int e;
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         add_edge(s,d);
//     }
//     display();
//     return 0;
// }