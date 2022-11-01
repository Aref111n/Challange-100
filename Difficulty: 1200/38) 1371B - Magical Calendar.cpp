#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main()
{
    ll tc ; cin >> tc ;
    while(tc--) {
        ll n, r ;
        cin >> n >> r ;
        if(n<=r)
        {
            ll p = n-1 ;
            p = (p*(p+1))/2 ;
            cout << p+1 << endl ;
        }
        else
            cout << r*(r+1)/2 << endl ;
    }
    return 0;
}
