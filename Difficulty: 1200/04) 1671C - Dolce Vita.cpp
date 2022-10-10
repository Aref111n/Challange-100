#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main()
{
    ll tc ;
    cin >> tc ;
    while(tc--) {
        ll n, k ;
        cin >> n >> k ;

        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin>>a[i] ;
        sort(a, a+n) ;

        ll c = 0, s = 0 ;
        for(int i=0; i<n; i++) {
            s += a[i] ;
            if(k<s)
                break;
            else {
                c += (((k-s)/(i+1))+1) ;
            }
        }

        cout << c << endl ;
    }
}
