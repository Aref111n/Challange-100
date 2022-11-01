#include<bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

typedef long long ll ;
typedef pair<ll, ll>pll ;

ll ceill(ll n, ll k) {
    return (n/k) + bool(n%k) ;
}

void solve()
{
    ll n, k ;
    cin >> n >> k ;
    ll mxd = ceill(k, n) ;
    map<ll, ll>mp ;

    for(int i=0; i<k; i++) {
        ll a; cin >> a;
        mp[a]++ ;
    }

    while(mxd) {
        ll t=0 ;
        for(auto it: mp) {
            t += (it.second/mxd) ;
        }
        if(t>=n)
            break;
        mxd-- ;
    }

    cout << mxd << endl ;
}

int main()
{
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--)
    {
        solve() ;
    }
}
