#include<iostream>
#include<vector>
using namespace std;
    string ans="";
    vector<vector<int>>dp;
    int f(string  &s1,string &s2,int i,int j,string output){
        if(output.size()>ans.size()) ans=output;
        if(i>=s1.size()) return 0;
        if(j>=s2.size()) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        if(s1[i]==s2[j]) {
            return dp[i][j]= 1+f(s1,s2,i+1,j+1,output+s1[i]);
        }else{
           return dp[i][j]= max(f(s1,s2,i+1,j,output), f(s1,s2,i,j+1,output));
        }
    }
    
int main (){
    string s1,s2;
    cin>>s1>>s2;
   //  dp.clear();
   // dp.resize(1005,vector<int>(1005,-1));
   // f(s1,s2,0,0,"");
  //  cout<<ans;
  // buttom up solution
   dp.clear();
        dp.resize(1005,vector<int>(1005,0));
        for(int i=s1.size()-1;i>=0;i--){
            for(int j=s2.size()-1;j>=0;j--){
                 if(s1[i]==s2[j]) {
                  dp[i][j]= 1+dp[i+1][j+1];
                }else{
                   dp[i][j]= max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
        return dp[0][0];

}
