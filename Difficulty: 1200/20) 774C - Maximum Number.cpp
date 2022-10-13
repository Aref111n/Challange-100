#include<bits/stdc++.h>
#define pi 3.14159265359
#define rf 2.2360679774997
using namespace std;

typedef long long ll ;
typedef pair<ll, ll>pll ;

ll ceill(ll a, ll b) {
    if(a<0)
        return a/b ;

    return (a/b)+bool(a%b) ;
}

void solve()
{
    ll n ;
    cin >> n ;
    if(n%2==0) {
        for(int i=0; i<n/2; i++)
            cout << 1 ;
        cout << endl ;
    }
    else {
        cout << 7 ;
        n = n-3 ;
        for(int i=0; i<n/2; i++)
            cout << 1 ;
        cout << endl ;
    }
}

int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
