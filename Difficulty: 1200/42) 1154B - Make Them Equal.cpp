#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

double bscheck(double m, double x, double y) {

}

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        map<ll, ll> mp ;
        for(int i=0; i<n; i++) {
            ll a; cin >> a ;
            mp[a]++ ;
        }

        if(mp.size()>3)
            cout << -1 << endl ;
        else {
            ll p , q , r ;
            map<ll, ll>::iterator it = mp.begin() ;
            if(mp.size()==1)
                cout << 0 << endl ;
            else if(mp.size()==2) {
                p = it->first ;
                it++;
                q = it->first ;
                if(abs(p-q)%2==0)
                    cout << abs(p-q)/2 << endl ;
                else
                    cout << abs(p-q) << endl ;
            }
            else if(mp.size()==3) {
                p = it->first ;
                it++;
                q = it->first ;
                it++ ;
                r = it->first ;
                //cout << p << " " << q << " " << r << endl ;
                if(abs(p+r)%2==0 && abs(p+r)/2==q)
                    cout << abs(p-q) << endl ;
                else
                    cout << -1 << endl ;
            }
        }
    }
    return 0;
}
