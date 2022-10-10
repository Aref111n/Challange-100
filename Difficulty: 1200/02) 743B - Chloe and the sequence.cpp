#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define pi 3.14159265359
using namespace std;

ll Pow(ll k) {
    ll s=1;
    while(k--)
        s*=2 ;
    return s ;
}

int main()
{
    ll tc=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, k ;
        cin >> n >> k ;
        ll l = 1, r = Pow(n+1)-1 ;
        ll c = n+1 ;
        while(l<=r) {
            ll m = (l+r)/2 ;
            if(m<k)
                l=m+1 ;
            else if(m==k)
                break;
            else
                r=m-1 ;
            c-- ;
        }

        cout << c << endl ;
    }
}
