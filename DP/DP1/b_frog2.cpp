#include<iostream>
#include<climits>
#include<cmath>
#include<vector>
using namespace std;
vector<int>h; // height
vector<int>dp;
int k;
int f(int i){//TC =O(nk) SC=O(n); 
    if(i >= h.size()){
        return INT_MAX;
    }
    if(i == h.size()-1){
        //last stonr
        return 0;
    }
    if(dp[i]!= -1) return dp[i];
    int ans =INT_MAX;
    for(int j =1;j<=k;j++){
        if(i+j >= h.size()) break;
        ans =min(ans, abs(h[i]-h[i+j]) +f(i+j));

    }
    return  dp[i] = ans;

}
int fbu(){// TC =O(nk) SC=O(n);
    int n=h.size();
    dp.resize(100005,INT_MAX);
    // base case
    dp[n-1]=0;
    for(int i= n-2;i>=0;i--){
        for(int j =1;j<=k;j++){
        if(i+j >= h.size()) break;
        dp[i] =min(dp[i], abs(h[i]-h[i+j]) +dp[i+j]);

    }
    }
    return dp[0];

}
int main(){
    int n;
    cin>>n>>k;
    h.resize(n);
    dp.resize(n,-1); //dp[i] -1 ->ith not yet completed
    for(int i=0;i<n;i++) cin>>h[i];
    cout<<f(0);
  //  cout<<fbu();
    return 0;
  

}