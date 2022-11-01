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
    map<string, ll> mp ;
    string s[n+2] ;
    for(int i=0; i<n; i++) {
        cin >> s[i] ;
    }

    for(int i=n-1; i>=0; i--) {
        if(mp[s[i]]==0) {
            cout << s[i] << endl ;
            mp[s[i]]=1 ;
        }
    }
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
