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
    ll a[n+1] ;
    for(int i=0; i<n; i++)
        cin >> a[i] ;
    sort(a, a+n) ;
    ll mn=1e18, x;
    for(int i=0; i<n-1; i++) {
        if(abs(a[i]-a[i+1])<mn) {
            mn = abs(a[i]-a[i+1]) ;
            x = i ;
        }
    }

    vector<ll> v ;
    v.push_back(a[x]) ;
    for(int i=x+2; i<n; i++) {
        v.push_back(a[i]) ;
    }

    for(int i=0; i<x; i++) {
        v.push_back(a[i]) ;
    }

    v.push_back(a[x+1]) ;
    for(auto it: v)
        cout << it << " " ;
    cout << endl ;
}

int main()
{
    ll tc=1 ;
    cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
