#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main()
{
    ll tc=1 ;
    cin >> tc ;
    while(tc--)
    {
        ll n ;
        cin >> n ;
        vector<ll> a, b ;
        for(int i=0; i<2*n; i++) {
            ll x, y ;
            cin >> x >> y ;
            if(x==0)
                a.push_back(abs(y)) ;
            else
                b.push_back(abs(x)) ;
        }

        sort(a.begin(), a.end()) ;
        sort(b.begin(), b.end()) ;

        double mn = 0 ;
        for(int i=0; i<n; i++) {
            double y = a[i] ;
            double z = b[i] ;
            double ans = sqrt((y*y)+(z*z)) ;
            mn += ans ;
        }

        cout << fixed << setprecision(25) << mn << endl ;
    }
    return 0;
}
