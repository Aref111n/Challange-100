#include<iostream>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll a[n+2], dp[n+1];
    for(int i=0; i<n; i++) {
        cin >> a[i] ;
        dp[i] = 1e18 ;
    }
   
    ll last= -1 ; 
    for(int i=0; i<n; i++) {
        if(last>=0 && a[i]) {
            dp[i] = i - last ;
        }
        else if(a[i] == 0)
            last = i ;
    }
    
    last= -1 ; 
    for(int i=n-1; i>=0; i--) {
        if(last>=0 && a[i]) {
            dp[i] = min(last-i, dp[i]) ;
        }
        else if(a[i] == 0)
            last = i ;
    }
    
    for(int i=0; i<n; i++) {
        if(a[i]==0)
            cout << a[i] << " " ;
        else
            cout << dp[i] << " " ;
    }
    cout << endl;
}

int main() {
    ll tc = 1;
    //cin >> tc ;
    while(tc--)
        solve();
}
