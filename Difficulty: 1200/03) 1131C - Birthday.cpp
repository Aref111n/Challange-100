#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main()
{
    ll tc=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, i ;
        cin >> n ;

        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin>>a[i] ;
        sort(a, a+n) ;

        for(i=0; i<n; i+=2)
            cout << a[i] << " " ;
        for(i=(n%2?n-2:n-1); i>=0; i-=2)
            cout << a[i] << " " ;
        cout << endl ;
    }
}
