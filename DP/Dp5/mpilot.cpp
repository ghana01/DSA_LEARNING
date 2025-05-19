#include<iostream>
#include<vector>
#define ll as  long long
using namespace std;
vector<ll>cap(1005,0);
vector<<ll>ass(10005,0);
ll dp[10005][5005];
int n;
ll calc(int i,int x){
    if(dp[i][x] !=-1) return dp[i][x];
    if(i==n){
        return 0;
    }
    if(x==0){
        return dp[i][x]=calc(i+1,x+1)+as[i];
    }else if(x==n-i){
        return dp[i][x]=calc(i+1,x-1)+cap[i];
    }else{
        return dp[i][x]=min(calc(i+1,x+1)+as[i],calc(i+1,x-1)+cap[i]);
    }
}
int main(){

    dp[0][0]=as[0]+calc(1,1);

}