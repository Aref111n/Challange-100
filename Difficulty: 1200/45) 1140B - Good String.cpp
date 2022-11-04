#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll tc = 1, z=1 ;
    cin >> tc ;
    while(tc--) {
        ll n ; cin >> n ;
        string s ;
        cin >> s ;
        ll a=0, b=0 ;
        ll i = n-1 ;
        while(s[i]!='<' && i>=0) {
            i-- ;
            a++ ;
        }

        i=0 ;
        while(s[i]!='>' && i<n) {
            i++ ;
            b++ ;
        }

        cout << min(a,b) << endl ;
    }
    return 0;
}
