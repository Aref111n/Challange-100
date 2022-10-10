#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll a[n+2];
    map<ll, ll>mp;
    for(int i=0; i<n; i++) {
        cin >> a[i] ;
        mp[a[i]]++;
    }
   
    ll last=-1, c=0, mn=0;
    for(auto it: mp) {
        if(last>=0) 
            mn = min(it.second, last) ;
        c += mn ;
        last = it.second + (last==-1?0:(last-mn));
    }
    
    cout << n-c << endl ;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("outp1.txt", "w", stdout);
#endif
    ll tc = 1;
    //cin >> tc ;
    while(tc--)
        solve();
}
