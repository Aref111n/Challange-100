#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

ll ceill(ll a, ll b) {
    return (a/b)+bool(a%b) ;
}

int main() {
    int tc=1 ;
    //cin >> tc;
    while(tc--) {
       ll n, a, b ;
       cin >> n >> a >> b ;
       ll mn = -1e18 ;
       for(int i=1; i<n; i++) {
            mn = max(mn, min((a/i), (b/(n-i)))) ;
       }

       cout << mn << endl ;
    }
}
