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
        ll n, m ;
        cin >> n >> m ;
        vector<pair<ll, ll> > v ;
        map<ll, ll> mp ;

        for(int i=0; i<m; i++) {
            ll x, y ;
            cin >> x >> y ;
            mp[x]=i+1 ;
            v.push_back({y, x}) ;
        }

        sort(v.begin(), v.end()) ;

        ll s=0 ;
        vector<ll>ans ;
        for(int i=0; i<2*n; i++) {
            s += v[i].first ;
            ans.push_back(v[i].second) ;
        }

        sort(ans.begin(), ans.end()) ;

        cout << s << endl ;
        for(int i=0; i<n; i++)
            cout << mp[ans[i]] << " " << mp[ans[(2*n)-i-1]] << endl ;

    }
}
