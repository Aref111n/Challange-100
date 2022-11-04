#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll tc = 1, z=1 ;
    cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        map<ll, ll> mp ;
        ll mn = 1e18 ;
        for(int i=0; i<n; i++) {
            ll a;
            cin >> a ;
            if(mp[a]==0)
                mp[a] = i+1 ;
            else {
                mn = min(mn, i-mp[a]+2) ;
                mp[a] = i+1 ;
            }
        }

        cout << (mn==1e18? -1:mn) << endl ;
    }
    return 0;
}
