#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

ll traillingzero(ll n)
{
    ll cnt = 0 ;
    ll f=5 ;
    while(n>=f)
    {
        cnt += (n/f) ;
        f *= 5 ;
    }

    return cnt ;
}

int main()
{
    //psieve() ;
    ll tc ;
    cin >> tc ;
    ll z=1 ;
    while(tc--)
    {
        ll n, k, s=0 ;
        cin >> n >> k ;
        ll a[n+1] ;
        for(int i=0; i<n; i++) {
            cin >> a[i] ;
            s += a[i];
        }

        if(k>s)
        {
            cout << -1 << endl ;
            continue ;
        }

        ll l=0, r=0, mx = 0, t=0;
        while(r<n) {
            t+=a[r] ;
            if(t>k) {
                while(t>k) {
                    t-=a[l++] ;
                }
            }
            if(t==k)
                mx = max(mx, r-l+1) ;
            r++ ;
        }

        cout << n-mx << endl ;
    }
}
