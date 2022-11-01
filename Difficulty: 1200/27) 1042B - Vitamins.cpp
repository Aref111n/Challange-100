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
    ll n, m=0 ;
    cin >> n ;
    ll mn = 1e18 ;
    ll mna=1e18, mnb = 1e18, mnc = 1e18 ;
    ll a[n+1]; string s[n+1] ;
    for(int i=0; i<n; i++) {
        ll aa ; string sss ;
        cin >> aa >> sss ;
        if(sss=="A")
            mna = min(mna, aa) ;
        if(sss=="B")
            mnb = min(mnb, aa) ;
        if(sss=="C")
            mnc = min(mnc, aa) ;

        if(sss.size()==3)
            mn = min(mn, aa) ;
        else {
            a[m] = aa ;
            s[m] = sss ;
            m++ ;
        }
    }

    mn = min(mn, mna+mnb+mnc) ;

    for(int i=0; i<m; i++) {

        for(int j=i+1; j<n; j++) {
            set<char>ss;
            for(int x=0; x<s[i].size(); x++)
                ss.insert(s[i][x]) ;
            for(int x=0; x<s[j].size(); x++)
                ss.insert(s[j][x]) ;
            if(ss.size()==3) {
                mn = min(mn, a[i]+a[j]) ;
                continue ;
            }
        }
    }

    if(mn==1e18)
        cout << -1 << endl ;
    else
        cout << mn << endl ;
}

int main()
{
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--)
    {
        solve() ;
    }
}
