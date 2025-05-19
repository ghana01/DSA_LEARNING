#include<iostream>
#include<string>
using namespace std;
bool isapalindrome(string s,int i,int j){
    if(i>j) return true;
   if(s[i]!=s[j]) return false;
   else return isapalindrome(s,i+1,j-1);
}
using namespace std;
int main (){
    string s="mom";
    cout<<isapalindrome(s,0,s.length()-1);
}
