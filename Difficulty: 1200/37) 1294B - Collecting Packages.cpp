#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main()
{
    ll tc ;
    cin >> tc ;
    while(tc--)
    {
        ll n ;
        cin >> n ;
        vector<pair<ll, ll> >v ;
        for(int i=0; i<n; i++)
        {
            ll x, y ;
            cin >> x >> y ;
            v.push_back({x, y}) ;
        }

        sort(v.begin(), v.end()) ;
        string ans = "" ;

        ll x =0, y = 0 ;
        for(int i=0; i<n; i++)
        {
            ll p=v[i].first, q=v[i].second ;
            if(x>p || y>q) {
                ans.clear() ;
                break;
            }
            while(x!=p)
            {
                ans += "R" ;
                x++ ;
            }

            while(y!=q)
            {
                ans += "U" ;
                y++ ;
            }
        }

        if(ans.size()==0)
            cout << "NO" << endl ;
        else {
            cout << "YES" << endl ;
            cout << ans << endl ;
        }
    }
    return 0;
}
