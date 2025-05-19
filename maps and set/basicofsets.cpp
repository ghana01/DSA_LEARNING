#include<iostream>
#include<unordered_set>
using namespace std;
int main (){
    unordered_set<int>S;
    S.insert(1);
    S.insert(2);
    S.insert(3);
    S.insert(4);
    S.insert(5);
    S.insert(1);
    S.erase(2);
    int target = 4;
    // S.find()-> it search in set ,and if it is not found then itreturn  the last element
    if(S.find(target)!=S.end()){//target exist
              cout<<"exist"<<endl;
    }
     
     //for  each loop
   for(int ele:S){
    cout<<ele<<" ";
   }
  
}

