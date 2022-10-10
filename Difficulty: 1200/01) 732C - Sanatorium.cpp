#include<bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

typedef long long ll ;
typedef pair<ll, ll> pll ;

int main()
{
    ll tc=1 ;
    //cin >> tc ;
    while(tc--) {
        ll b, d, s;
        cin >> b >> d >> s ;
        ll mx = max({b, d, s}) ;
        cout << (mx-b-bool(mx!=b)) + (mx-d-bool(mx!=d)) + (mx-s-bool(mx!=s)) << endl ;
    }
}
