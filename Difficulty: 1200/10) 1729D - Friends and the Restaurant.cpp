#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main()
{
    //psieve() ;
    ll tc ;
    cin >> tc ;
    while(tc--)
    {
        ll n ;
        cin >> n ;
        ll a[n+5], d[n+5] ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;
        for(int i=0; i<n; i++) {
            ll dd ;
            cin >> dd ;
            d[i] = dd-a[i] ;
        }

        sort(d, d+n) ;
        ll l=0, r=n-1, c=0 ;
        while(l<r) {
            if(d[l]+d[r]>=0) {
                c++ ;
                l++;
                r--;
            }
            else {
                l++ ;
            }
        }

        cout << c << endl ;
    }
}
