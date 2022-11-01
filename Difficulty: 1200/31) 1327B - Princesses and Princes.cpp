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
    vector<ll>adj[n+1] ;

    for(int i=0; i<n; i++) {
        ll k ;
        cin >> k ;
        for(int j=0; j<k; j++) {
            ll v ;
            cin >> v ;
            adj[i].push_back(v-1) ;
        }
    }

    map<ll, ll>mp ;
    for(int i=0; i<n; i++)
        mp[i]=1 ;
    ll rem = -1 ;

    for(int i=0; i<n;i++) {
        ll k = adj[i].size() ;
        ll f=0 ;
        for(int j=0; j<k; j++) {
            if(mp[adj[i][j]]==1) {
                mp[adj[i][j]]=0 ;
                f=1 ;
                break;
            }
        }

        if(f==0)
            rem = i;
    }

    if(rem == -1)
        cout << "OPTIMAL" << endl ;
    else {
        cout << "IMPROVE" << endl ;
        ll pp ;
        for(int i=0; i<n; i++) {
            if(mp[i]==1) {
                pp = i ;
                break;
            }
            //cout << mp[i] << endl ;
        }
        cout << rem+1 << " " << pp+1 << endl ;
    }
}

int main()
{
    ll tc=1 ;
    cin >> tc ;
    while(tc--) {
        solve() ;
    }
}
