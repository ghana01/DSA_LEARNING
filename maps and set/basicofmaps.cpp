#include<iostream>
#include<unordered_map>
using namespace std;
int main (){
    unordered_map<string,int> m;
    pair<string,int>p1;
    p1.first = "raghav";
    p1.second = 76;
    m.insert(p1);
    m["Harsh"] = 15;
    m["lokesh"] =76;

    for(pair<string,int> p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("raghav");
     for(pair<string,int> p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    cout<<m["lokesh"];
     
}