#include<iostream>
#include<string>
#include<vector>
#define ll long long int
using namespace std;

// string decode(string &input){
//     string res="";
//     if(input.size()==1) {
//         res +=(char)(64 + input[0]-'0')
//     }else{
//         int num = (input[0]-'0')*10 + (input[1]-'0');
//         res +=(char)(64+num);
//     }
  //  return res;
    ll f(string &str, int i) {
    if (i == 0) return 1;
    ll ans = 0;
    if (str[i] - '0' > 0) ans += f(str, i - 1);
    if (i > 0 && (str[i - 1] - '0') * 10 + (str[i] - '0') <= 26 && (str[i - 1] - '0') * 10 + (str[i] - '0') >= 10) ans += f(str, i - 2);
    return ans;
}




int main() {
    string n;
    cin >> n;
    while (n[0] != '0') {
        cout << f(n, n.size() - 1) << "\n";
        cin >> n;
    }
}