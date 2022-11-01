#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

int main()
{
    ll n, i ;
    cin >> n ;
    if(n%2==1)
        cout << "YES" << endl ;
    else {
        cout << "NO" << endl ;
        return 0;
    }
    cout << 1 << " " ;
    ll c=0 ;
    for(i=4; i<=2*n; i++) {
        c++ ;
        if(c<=2)
            cout << i << " " ;
        if(c==4)
            c=0 ;
    }

    c=0 ;
    for(i=2; i<=2*n; i++) {
        c++ ;
        if(c<=2)
            cout << i << " " ;
        if(c==4)
            c=0 ;
    }
    return 0;
}
