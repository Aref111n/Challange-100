#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
    ll tc = 1, z=1 ;
    //cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll s=0, a=2, b=3;
        while(b<=n) {
            s += (a*b) ;
            a++ ;
            b++ ;
        }
        cout << s << endl ;
    }
    return 0;
}
