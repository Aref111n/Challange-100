#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n, k ;
        cin >> n >> k ;
        ll a[n+1] ;
        for(int i=0; i<n; i++) {
            cin >> a[i] ;
        }

        vector<ll>v ;
        ll odd=0, even=0 ;
        for(int i=0; i<n; i++) {
            if(a[i]%2==0)
                even++ ;
            else
                odd++ ;
            if(even==odd && i<n-1)
                v.push_back(abs(a[i+1]-a[i])) ;
        }

        sort(v.begin(), v.end()) ;

        ll s = 0, i ;
        if(v.size()==0 || k<v[0])
            cout << 0 << endl ;
        else {
            //cout << v.size() << endl ;
            for(i=0; s<k && i<v.size(); i++)
                s += v[i] ;
            if(s>k)
                i-- ;
            cout << i << endl ;
        }
    }
    return 0;
}
