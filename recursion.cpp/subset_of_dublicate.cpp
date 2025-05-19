#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storesubset(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
   if(original.length()==1){
    if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
    storesubset(ans,original.substr(1),v,true);
    return;
    
   }
   char dh =original[1];
   if(ch==dh){
    if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
     storesubset(ans,original.substr(1),v,false);
   }
   else{
    if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
     storesubset(ans,original.substr(1),v,true);
   }
}
    
     
int main(){
   string str="aab";
   vector<string>v;
    storesubset("",str,v,true);
    for(string ele:v){
        cout<<ele<<endl;
    }
}