#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;



int main() {
    int tc=1 ;
    //cin >> tc;
    while(tc--) {
       ll n, m ;
       cin >> n >> m ;
       ll a[n+5] ;
       a[0]=0 ;
       for(int i=1; i<=n; i++) {
            ll c, t ;
            cin >> c >> t ;
            a[i] = a[i-1]+(c*t) ;
       }

       for(int i=0; i<m; i++) {
            ll v ; cin >> v ;
            cout << lower_bound(a, a+n, v)-a << endl ;
       }
    }
}
