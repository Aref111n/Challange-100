#include<bits/stdc++.h>
#define pi 3.14159265359
#define rf 2.2360679774997
using namespace std;

typedef long long ll ;
typedef pair<ll, ll>pll ;

void solve()
{
    ll n ;
    cin >> n ;
    ll a[2*n+1], b[2*n + 1] ;
    for(int i=0; i<2*n; i++) {
        cin >> a[i] ;
        b[i] = a[i] ;
    }

    ll k1=0, k2=0 ;
    while(k1<=1000) {
        if(is_sorted(a, a+(2*n))) {
            break;
        }
        k1++ ;
        if(k1%2==1) {
            for(int i=0; i<2*n; i+=2)
                swap(a[i], a[i+1]) ;
        }
        else {
            for(int i=0; i<n; i++)
                swap(a[i], a[n+i]) ;
        }
    }

    while(k2<=1000) {
        if(is_sorted(b, b+(2*n))) {
            break;
        }
        k2++ ;
        if(k2%2==0) {
            for(int i=0; i<2*n; i+=2)
                swap(b[i], b[i+1]) ;
        }
        else {
            for(int i=0; i<n; i++)
                swap(b[i], b[n+i]) ;
        }
    }
    if(k1==1001 && k1==k2)
        cout << -1 << endl ;
    else
        cout << min(k1, k2) << endl ;
}

int main() {
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
