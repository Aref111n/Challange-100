#include<bits/stdc++.h>
#define pi 3.14159265359
using namespace std;

typedef long long ll ;
typedef pair<ll, ll>pll ;

ll ceill(ll n, ll k) {
    return (n/k) + bool(n%k) ;
}

void solve()
{
    double n, s ;
    cin >> n >> s ;
    vector<pair<double, double> > v ;
    for(int i=0; i<n; i++) {
        double x, y, k ;
        cin >> x >> y >> k ;
        double root = sqrt((x*x)+(y*y)) ;
        v.push_back({root, k}) ;
    }

    sort(v.begin(), v.end()) ;

    for(int i=0; i<n; i++) {
        s += v[i].second ;
        if(s>=1000000)
        {
            cout << fixed << setprecision(10) << v[i].first << endl ;
            return ;
        }
    }

    cout << -1 << endl ;
}

int main()
{
    ll tc = 1 ;
    //cin >> tc ;
    while(tc--)
    {
        solve() ;
    }
}
