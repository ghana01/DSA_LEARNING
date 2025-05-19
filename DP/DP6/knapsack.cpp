#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
#define ll long long int
using namespace std;
vector<vector<ll>>dp(105,vector<ll>(100005,-1));

ll f(vector<int>& wts, vector<int>& val, int idx, int w) {
    if (idx == wts.size()) return 0;

    if (dp[idx][w] != -1) return dp[idx][w];
    ll ans=INT_MIN;
    
     ans = f(wts, val, idx + 1, w); // not pick
    if (wts[idx] <= w) {
        ans = max(ans, val[idx] + f(wts, val, idx + 1, w - wts[idx])); // pick
    }
    return dp[idx][w] = ans;
}

int main() {
    int n, w;
    cin >> n >> w;
    vector<int> wts(n), val(n);

    for (int i = 0; i < n; i++) {
        cin >> wts[i] >> val[i];
    }

    
    cout << f(wts, val, 0, w) << "\n";
}
