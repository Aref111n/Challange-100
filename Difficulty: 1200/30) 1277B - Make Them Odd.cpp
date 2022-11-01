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
    ll n ;
    cin >> n ;
    map<ll, ll>mp ;
    vector<ll>v ;
    for(int i=0; i<n; i++) {
        ll a; cin >> a;
        if(mp[a]==0)
            v.push_back(a) ;
        mp[a]=1 ;
    }

    sort(v.rbegin(), v.rend()) ;

    ll c=0 ;
    for(int i=0; i<v.size(); i++) {
        ll p = v[i] ;
        while(p%2==0) {
            p/=2 ;
            c++ ;
            if(mp[p]==1)
                break;
        }
    }

    cout << c << endl ;
}

int main()
{
    ll tc=1 ;
    cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
