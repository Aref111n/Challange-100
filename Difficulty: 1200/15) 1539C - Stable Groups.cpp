#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ceill(ll a, ll b) {
    return (a/b)+bool(a%b) ;
}

void solve() {
    ll n, k, x ;
    cin >> n >> k >> x ;
    ll a[n+2] ;
    vector<ll> v;
    for(int i=0; i<n; i++) {
        cin >> a[i] ;
    }

    sort(a, a+n) ;
    for(int i=0; i<n; i++) {
      if(i && a[i]-a[i-1]>x)
            v.push_back(a[i]-a[i-1]) ;
    }
    
    sort(v.begin(), v.end()) ;
    ll c = v.size() + 1 ;
    for(int i=0; i<v.size(); i++) {
        if(ceill((v[i]-x),x) <= k) {
            k -= ceill((v[i]-x),x) ;
            c-- ;
        }
        else if(k==0)
            break;
    }
    
    cout << c << endl ;
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
