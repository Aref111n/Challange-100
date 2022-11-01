#include<bits/stdc++.h>
#define pi 3.14159265359
#define rf 2.2360679774997
using namespace std;

typedef long long ll ;
typedef pair<ll, ll>pll ;

void solve()
{
    ll n, q ;
    cin >> n >> q ;
    ll a[n+5], t[n+5] ;
    a[0] = 0 ;
    t[0] = 0 ;
    for(int i=1; i<=n; i++) {
        ll aa ;
        cin >> aa ;
        if(i==1) {
            a[i-1] = aa ;
        }
        else
            a[i-1] = max(a[i-2], aa) ;

        t[i] = t[i-1] + aa ;
    }

    for(int i=0; i<q; i++) {
        ll k ;
        cin >> k ;
        ll ub = upper_bound(a, a+n, k) - a ;
        if(k<a[0])
            cout << 0 << " " ;
        else {
            cout << t[ub] << " " ;
        }
    }

    cout << endl ;
}

int main() {
    ll tc = 1 ;
    cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
