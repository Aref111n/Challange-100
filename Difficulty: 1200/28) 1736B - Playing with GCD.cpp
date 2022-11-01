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
    vector<ll>v ;

    for(int i=0; i<n; i++) {
        cin >> a[i] ;
        if(i==0)
            v.push_back(a[i]);
        else {
            ll lcm = (a[i-1]*a[i])/__gcd(a[i-1], a[i]) ;
            v.push_back(lcm) ;
        }
    }

    v.push_back(a[n-1]) ;

    for(int i=0; i<v.size()-1; i++) {
        if(__gcd(v[i], v[i+1])!=a[i])
        {
            cout << "NO" << endl ;
            return  ;
        }
    }

    cout << "YES" << endl ;
    return ;
}

int main()
{
    ll tc=1 ;
    cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
