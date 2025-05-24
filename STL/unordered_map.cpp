#include<iostream>
#include<unordered_map>
#include<map>

using namespace std;



int main(){
   // creation
    unordered_map<string,int> m;
    //insertion 
    //1
    pair<string,int>p =make_pair("abc",1);
    m.insert(p);
    //2
    pair<string,int>p2("def",2);
    m.insert(p2);
    //3
    m["ghi"]=1;//this is updation 
    //4 
    m.insert(make_pair("jkl",4));

    //search
    cout<<m["abc"]<<endl;
    cout<<m.at("def")<<endl;
    cout<<m["ghi"]<<endl;
    //let try to acces the value which we did not created
    cout<<m["xyz"]<<endl; //this will create a new entry in the map with value 0
   // cout<<m.at("klm")<<endl; //this will give an error

    //size
    cout<<m.size()<<endl;
    //iterating
    unordered_map<string,int>::iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    //or we can use for loop
    for(auto it = m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    //to check presensce 
    cout<<m.count("abc")<<endl;

    //to erase
    m.erase("abc");
    cout<<m.size()<<endl;

}


