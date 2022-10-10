#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main()
{
    ll tc ;
    cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll a[n+1] ;
        ll mx = 0 ;
        for(int i=0; i<n; i++) {
            cin >> a[i] ;
            mx = max(mx, a[i]) ;
        }

        string s="" ;
        for(int i=0; i<mx+1; i++)
            s += 'a' ;

        cout << s << endl ;
        for(int i=0; i<n; i++) {
            s[a[i]] = (s[a[i]]=='a'?'b':'a') ;
            cout << s << endl ;
        }
    }
}
