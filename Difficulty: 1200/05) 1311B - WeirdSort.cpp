#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
using namespace std;

int main()
{
    ll tc ;
    cin >> tc ;
    while(tc--) {
        ll n, m ;
        cin >> n >> m ;
        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;

        ll b[n+1] ;
        memset(b, 0, sizeof b) ;
        for(int i=0; i<m; i++) {
            ll p ;
            cin >> p ;
            b[p-1]=1;
        }

        ll t=-1, k ;
        for(int i=0; i<n; i++) {
            if(b[i] && t==-1)
                t=i ;
            else if(b[i])
                continue ;
            else {
                k = i ;
                if(t!=k && t!=-1)
                    sort(a+t, a+k+1) ;
                t = -1 ;
            }
        }

        if(t>-1) {
            k = n ;
            if(t!=k && t!=-1)
                sort(a+t, a+n) ;
            t = -1 ;
        }

        if(is_sorted(a, a+n)==true)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
}
