#include<bits/stdc++.h>
using namespace std;

typedef long long ll ;

double bscheck(double m, double x, double y) {
    double h1 = sqrt((x*x)-(m*m)) ;
    double h2 = sqrt((y*y)-(m*m)) ;
    return (h1*h2)/(h1+h2) ;
}

int main()
{
    ll tc = 1, z=1 ;
    cin >> tc ;
    while(tc--) {
        ll n ;
        cin >> n ;
        ll a[n+1] ;
        for(int i=0; i<n; i++)
            cin >> a[i] ;
        sort(a, a+n) ;
        ll mx = -1000000000000000000 ;
        mx = max(mx, a[0]*a[1]*a[2]*a[3]*a[4]) ;
        mx = max(mx, a[0]*a[1]*a[2]*a[3]*a[n-1]) ;
        mx = max(mx, a[0]*a[1]*a[n-3]*a[n-2]*a[n-1]) ;
        mx = max(mx, a[n-5]*a[n-4]*a[n-3]*a[n-2]*a[n-1]) ;
        cout << mx << endl ;
    }
    return 0;
}
