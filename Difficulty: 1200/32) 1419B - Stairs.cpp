#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main()
{
    ll tc = 1 ;
    cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll i=0, k=1, s = 0 ;
        while(n>=0) {
            s = 2*s + k*k ;
            k*=2 ;
            n-=s ;
            if(n>=0)
                i++ ;
        }

        cout << i << endl ;
    }
    return 0;
}
