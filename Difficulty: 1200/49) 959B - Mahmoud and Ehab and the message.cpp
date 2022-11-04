#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, k, m ;
        cin >> n >> k >> m ;
        string s[n+1] ;
        map<string, ll> mp ;
        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin >> s[i] ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;
        for(int i=0; i<k; i++) {
            ll x ; cin >> x ;
            ll mn = 1e18 ;
            ll v[x+1] ;
            for(int j=0; j<x; j++) {
                cin >> v[j] ;
                mn = min(mn, a[v[j]-1]) ;
            }
            for(int j=0; j<x; j++)
                mp[s[v[j]-1]] = mn ;
        }

        ll cnt = 0 ;
        for(int i=0; i<m; i++)
        {
            string ss ; cin >> ss ;
            cnt += mp[ss] ;
        }
        cout << cnt << endl ;
    }
    return 0;
}
