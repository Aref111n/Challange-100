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
        ll x = -1 ;
        ll a[n+1] ;

        for(int i=0; i<n; i++) {
            cin >> a[i] ;
            if(i>0) {
                if(abs(a[i]-a[i-1])>1) {
                    x = i ;
                }
            }
        }

        if(x>0)
            cout << "YES" << endl << x << " " << x+1 << endl ;
        else
            cout << "NO" << endl ;
    }
    return 0;
}
