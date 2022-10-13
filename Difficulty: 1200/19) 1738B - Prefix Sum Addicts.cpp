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
    ll n, k ;
    cin >> n >> k ;
    ll a[k+1] ;
    for(int i=0; i<k; i++)
        cin >> a[i] ;

    ll d = 0 ;
    if(n==k)
        d = a[0] ;
    else {
        d = ceill(a[0],(n-k+1)) ;
    }
    bool bb = 1 ;
    for(int i=1; i<k; i++) {
        if(a[i]-a[i-1]<d)
        {
            bb = 0 ;
            break;
        }
        else {
            d = a[i]-a[i-1] ;
        }
    }

    if(bb==0)
        cout << "NO" << endl ;
    else
        cout << "YES" << endl ;
}

int main() {
    ll tc ;
    cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
