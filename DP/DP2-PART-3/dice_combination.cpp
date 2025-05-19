#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
#define mod 1000000007
#define ll long long int
using namespace std;


vector<ll>dp(1000006,-1);


ll f(int n){
    if(n==0) return 1;
    int sum =0;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i<=6;i++){
        if(n-i<0) break;
        sum =(sum %mod+f(n-i)%mod)%mod;
    }
    return dp[n] =sum%mod;
}
ll fbu(int n){
    dp[0]=1;
    for(int k=1;k<=n;k++){
        ll sum =0;
        for(int i=1;i<=6;i++){
            sum =(sum%mod +dp[k-i]%mod)%mod;
        }
        dp[k]=sum%mod;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);



}
   
   
    

    
    