#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

ll a[20] ;
bool check(ll i, ll n, ll v) {
    //cout << v << endl ;
    if(i==n)
    {
        if(v==0)
            return true ;
        else
            return false;
    }
    return check(i+1, n, abs(v+a[i])%360)|check(i+1, n, abs(v-a[i])%360) ;
}

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;
        if(check(0, n, 0))
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    return 0;
}
