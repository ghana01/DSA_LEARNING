#include<iostream>
//#include<pair>  only for pair 
#include<bits10_1.h>/stdc++.h>// we can use all the stl in c++ ater including this header


using namespace std;
int main(){
    
    //way to intilase the pair 
    pair<int,int> p2;
    //we can also intilase the pair like this
    pair<int,int> p2(30,40);
    //or we can also intilase the pair like this
    p2.first=10;
    p2.second=20;
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    //or we can also intilase the pair like this
    //p2.make_pair(10,20);

    
    pair<int,pair<int,int>> p1;
    
    //this is the way tpo intilise the pair inside pair  and accessing it 
    //pair<int,pair<int,int>> p1(10,{20,30});
    //or we can also intilase the pair like this
    //pair<int,pair<int,int>> p1(10,pair<int,int>(20,30));
    
    p1.first=10;
    p1.second.first=20;
    p1.second.second=30;

    cout<<p1.first<<endl;
    cout<<p1.second.first<<endl;
    cout<<p1.second.second<<endl;



    //also we can give diffferet pair of data types
    pair<int,char> p3;
    p3.first=10;
    p3.second='a';

    return 0;
}
